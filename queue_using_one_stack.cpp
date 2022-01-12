#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> s1;

    public:
        void enqueue(int x){
            s1.push(x);
        }

        int dequeue(){
            if(s1.empty()){
                cout<<"Queue already Empty"<<endl;
                return -1;
            }

            int x = s1.top();
            s1.pop();
            if(s1.empty()){
                return x;
            }

            int item = dequeue();
            s1.push(x);
            return item;
        }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    return 0;
}