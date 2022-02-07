#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_front(12);
    dq.push_front(14);
    dq.push_front(13);
    dq.push_back(1);
    dq.push_back(5);
    dq.push_back(7);


    for(auto i : dq){
        cout<<i<<" ";
    } cout<<endl;
    
    dq.pop_front();
    dq.pop_back();
    
    for(auto i : dq){
        cout<<i<<" ";
    }

    return 0;
}