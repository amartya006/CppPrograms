#include<bits/stdc++.h>
using namespace std;

#define n 20

class Queue{
    int *arr;
    int front;
    int back;

    public:
        Queue(){
            arr = new int[n];
            front = -1;
            back = -1;
        }

    void enqueue(int x){
        if(front == n-1){
            cout<<"Queue has no space"<<endl;
            return;
        } else if(front == -1){
            front+=1;
            back+=1;
            arr[back] = x;
            
        } else{
            back+=1;
            arr[back] = x;
        }
    }

    void dequeue(){
        if(front==-1 && back==-1){
            cout<<"Queue is already empty"<<endl;
            return;
        } else{
            front +=1;
            if(front>back){
                front = -1; 
                back = -1;
            }
        }
    }

    int peek(){
        if(front!=-1){
            return arr[front];
        } else {
            return -1;
        }
    }

    bool empty(){
        if(front == -1 && back == -1){
            return true;
        } else{
            return false;
        }
    }

};

int main(){
    Queue q;
    // cout<<"1. Enqueue(int x)"<<endl;
    // cout<<"2. Dequeue()"<<endl;
    // cout<<"3. Peek()"<<endl;
    // cout<<"4. Empty()"<<endl;
    // cout<<"5. Exit()"<<endl;
    // while(1){
    //     int ch;
    //     cout<<"Enter Your Choice:"<<endl;
    //     cin>>ch;
    //     if(ch==1){
    //         int x;
    //         cout<<"Enter Number to Insert"<<endl;
    //         cin>>x;
    //         q.enqueue(x);
            
    //     } else if(ch == 2){
    //         q.dequeue();
    //     } else if(ch == 3){
    //         cout<<q.peek();
    //     } else if(ch == 4){
    //         if(q.empty()){
    //             cout<<"Queue is Empty"<<endl;
    //         } else {
    //             cout<<"Queue is not empty"<<endl;
    //         }
    //     } else if(ch == 5){
    //         return 0;
    //     } else{
    //         cout<<"Invalid Choice"<<endl;
    //     }
    // }

    q.enqueue(5);
    q.enqueue(10);
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.empty()<<endl;
    q.dequeue();
    

    return 0;
}