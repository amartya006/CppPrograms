#include<bits/stdc++.h>
using namespace std;

#define n 100

class Stack{
    int* arr;
    int top;

    public:
    Stack(){
        arr = new int[n];
        top = -1;
    }
        
    void push(int x){
        if(top == n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
            return;
        }

        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"No Element in Stack"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top == -1;
    }
};

int main(){
    Stack st;
    st.push(5);
    st.push(10);
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.push(12);
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}