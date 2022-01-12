#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string str){
    stack<char> st;
    bool ans = true;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='[' || str[i]=='{' || str[i]=='('){
            st.push(str[i]);
        } else if(str[i] == ']'){
            
                    if(!st.empty() && st.top()=='['){
                        st.pop();
                    } else{
                        ans= false;
                        break;
                    }
                
        }   else if(str[i] == '}'){
                    if(!st.empty() && st.top()=='{'){
                        st.pop();
                    } else{
                        ans= false;
                        break;
                    }
        }    else if(str[i] == ')'){
                    if(!st.empty() && st.top()=='('){
                        st.pop();
                    } else{
                        ans= false;
                        break;
                    }
        }  
                    
            
                
                    
                
            }
        
    

    if(!st.empty()){
        return false;
    } else{
        return ans;
    }

}
    


int main(){
    if(isBalanced("[{()}]")){
        cout<<"Parenthesis is Balanced"<<endl;
    } else{
        cout<<"Parenthesis is Not Balanced"<<endl;
    }
    return 0;
}