//Method 2: Costly Pop

#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q1;
    queue<int> q2;
    int N;

    public:
        Stack(){
            N=0;
        }

        void push(int x){
            q1.push(x);
            N++;
        }

        void pop(){
            if(N==0){
                cout<<"Stack is Empty"<<endl;
            } else{
                int n = N;
                while(n!=1){
                    q2.push(q1.front());
                    q1.pop();
                    n--;
                }
                q1.pop();
                N--;
                queue<int> temp = q2;
                q2 = q1;
                q1 = temp; 
            }
            
        }

        int size(){
            return N;
        }

        int top(){
            return q1.back();
        }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(12);
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.push(1);
    cout<<s.top()<<endl;
    // cout<<s.top()<<endl;

    cout<<s.size()<<endl;

    return 0;
    
}