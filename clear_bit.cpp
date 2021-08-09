#include<iostream>
using namespace std;

int clear_bit(int n, int pos){
    int m= ~(1<<pos);
    return n & m;

}

int main(){
    cout<<clear_bit(5,2)<<endl;
    return 0;
}