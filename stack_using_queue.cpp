#include<bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;

    public:
        Stack(){
            N=0;
        }

        void push(int x){
            q2.push(x);
            N++;
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }

            queue<int> temp = q1;
            q1 = q2;
            q2 = temp;
        }

        void pop(){
            q1.pop();
            N--;
        }

        int top(){
            return q1.front();
        }

        bool empty(){
            if(q1.empty()){
                return true;
            }
            return false;
        }

        int size(){
            return N;
        }
};

int main(){
    Stack s;
    s.push(12);
    s.push(13);
    s.push(14);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    s.pop();
    cout<<s.empty()<<endl;

    return 0;
}