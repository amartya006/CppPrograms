#include<bits/stdc++.h>
using namespace std;

void swap(int *m, int *n){
    int temp = *m;
    *m = *n;
    *n =temp;
}

int main(){

    //Pointer Basics 
    int a = 50;
    int *aptr;
    aptr = &a;
    cout<<&a<<endl;
    cout<<aptr<<endl;

    cout<<a<<endl;
    cout<<*aptr<<endl;
    *aptr = *aptr-5;
    cout<<a<<endl;
    cout<<*aptr<<endl;


    //Pointer Arithmetic

    aptr+=2;
    aptr--;
    cout<<*aptr<<" "<<aptr<<endl;

    //Array and Pointer

    int arr[] = {10,20,35,42,53};
    int* ptr = arr;
    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;

    for(int i=0; i<5; i++){
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
    // Pointer to Pointer

    int x = 20;
    int *p = &x;
    int **q= &p;
    cout<<*p<<" "<<*q<<" "<<*p<<" "<<&x<<" "<<q<<" "<<&p<<endl;

    //Passing value to Function by Reference
    //Swapping values

    int m =10;
    int n= 20;
    int *mptr = &m;
    int *nptr = &n;

    swap(mptr,nptr);
    cout<<m<<" "<<n<<endl;


    return 0;
}