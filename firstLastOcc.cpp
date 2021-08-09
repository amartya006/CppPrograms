#include<bits/stdc++.h>
using namespace std;

int loccurance ( int arr [], int n , int i , int key ) {
if ( i == n ) {
return - 1 ;
}
int restArray = loccurance ( arr , n , i + 1 , key );
if ( restArray != - 1 ) {
return restArray ;
}
if ( arr [ i ] == key ) {
return i ;
}
return - 1 ;
}


int flag1 =0;
int foccurance(int arr[], int n, int key){
    //Base Case
    if(n==0){
        
        return 0;
    }

    //Recursive Intution
    return foccurance(arr, n-1, key);
    
    //Self Work
    if(arr[n-1]== key){
        return n-1;
    }
}

int main(){
    int n = 6;
    int arr[n] = {5, 4, 1, 3, 2, 4, 6};
    int key = 4;
    int a = loccurance(arr, n, 0 , key);
    cout<<a<<endl;
    int b = foccurance(arr,n,key);
    cout<<b<<endl;
}