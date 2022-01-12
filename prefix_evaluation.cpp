#include<iostream>
#include<stack>
#include<string>
#include<math.h>
using namespace std;

int prefixEvaluation(string str){
    stack<int> s;
    int op1, op2;
    for(int i=str.length()-1; i>=0; i--){
        if(str[i] >= '0' && str[i]<='9'){
            s.push(str[i]-'0');
        } else{
            op1 = s.top();
            s.pop();
            op2 = s.top();
            s.pop();

            switch (str[i]){
            case '+':
                s.push(op1 + op2);
                break;
            case '-':
                s.push(op1 - op2);
                break;
            case '*':
                s.push(op1 * op2);
                break;
            case '/':
                s.push(op1 / op2);
                break;
            case '^':
                s.push(pow(op1,op2));
                break;
        }
        }
        
    }
    return s.top();
}

int main(){
    string str = "-+7*45+20";
    
    cout<<prefixEvaluation(str);
    return 0;
}