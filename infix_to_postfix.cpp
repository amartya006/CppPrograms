#include<bits/stdc++.h>
using namespace std;

int precedence(char a){
    if(a=='^'){
        return 3;
    } else if(a=='*' || a=='/'){
        return 2;
    } else if(a=='+' || a=='-'){
        return 1;
    } else{
        return -1;
    }
}

string infix_postfix(string s){
    stack<int> st;
    string res="";
    for(int i=0; i<s.length(); i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            res+= s[i];
        }
        else if(s[i] == '('){
            st.push(s[i]);
        } 
        else if(s[i] ==')' ){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while( !st.empty() && ( precedence(st.top()) > precedence(s[i]) ) ){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);

            
        }
    }

    while(!st.empty()){
        res+=st.top();
        st.pop();
    }

    return res;
}

int main(){
    cout<<infix_postfix("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}