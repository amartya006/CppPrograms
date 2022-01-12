#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    public:
        node* front;
        node* back;
    Queue(){
        front=NULL;
        back=NULL;
    }

    void enqueue(int x){
        node* n = new node(x);
        if(front==NULL){
            front = n;
            back = n;
            return;
        }
        back->next = n;
        back=n;
    }

    void dequeue(){
        node* todelete = front;
        if(front==NULL){
            cout<<"Queue Already Empty"<<endl;
            return;
        }
        front = front->next;
        delete todelete;
    }

    int peek(){
        if(front == NULL){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if(front== NULL){
            return true;
        }
        return false;
    }
};

int main(){
    Queue q;
    q.enqueue(2);
    q.enqueue(8);
    q.enqueue(5);
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.empty()<<endl;
    return 0;
}