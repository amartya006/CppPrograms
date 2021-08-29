#include<iostream>
#include<stack>
#include<string>

using namespace std;
stack<string> s;

void reverseString(string str){
    for(int i=0; i<str.length(); i++){
        string word = "";
        
        while(str[i] != ' ' && i<str.length()){
            word += str[i];
            i++;
        }
        s.push(word);

    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main(){
    string str = "Hello my name is Amartya Nigam";
    reverseString(str);
    return 0;
}