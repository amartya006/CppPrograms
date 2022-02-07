#include<bits/stdc++.h>
using namespace std;

int redParen(string s){
    stack<char> st;
    int red = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            st.push(s[i]);
        } else if(s[i]==')'){
            if(st.top() == '('){
                red+=1;
                st.pop();
            } else{
                while(!st.empty() && st.top()!='('){
                    st.pop();
                }
            }
        }
    }
    return red;
}

int main(){
    string s;
    cin>>s;
    int res = redParen(s);
    cout<<res;
    return 0;
}