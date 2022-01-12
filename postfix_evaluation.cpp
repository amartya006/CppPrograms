#include<iostream>
#include<stack>
#include<string>
#include<math.h>
using namespace std;

int postfixEvaluation(string str){
    stack<int> s;
    int op1, op2;
    for(int i=0; i<=str.length()-1; i++){
        if(str[i] >= '0' && str[i]<='9'){
            s.push(str[i]-'0');
        } else{
            op2 = s.top();
            s.pop();
            op1 = s.top();
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
    string str = "46+2/5*7+";
    cout<<postfixEvaluation(str);
    return 0;
}