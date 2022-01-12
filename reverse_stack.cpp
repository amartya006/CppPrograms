#include<iostream>
#include<stack>
using namespace std;

// Reversing a Stack - Optimised Approach

void insertAtBottom(stack<int> &s, int ele){
    if(s.empty()){
        s.push(ele);
        return;
    }

    int topEle = s.top();
    s.pop();
    insertAtBottom(s,ele);
    s.push(topEle);
}

void reverse(stack<int> &s){
if(s.empty()){
    return;
}

    int ele = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s, ele);

}


int main(){
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(12);
    s.push(22);
    reverse(s);
    
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}


//Reversing a Stack - Brute Force Approach

/** int main(){
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(10);

    stack<int> st2;
    while(!st.empty()){
        st2.push(st.top());
        st.pop();
    }

    while(!st2.empty()){
        
        cout<<st2.top()<<endl;
        st2.pop();
    }
} **/