#include<bits/stdc++.h>
using namespace std;

int first_occ(int arr[], int n, int key, int i){
    if(i==n){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }

    return first_occ(arr,n,key,i+1);
}

int last_occ(int arr[], int n, int key, int i){
    if(i==-1){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }

    return first_occ(arr,n,key,i-1);
}

int main(){
    int n=8;
    int arr[] = {1,5,6,2,3,7,5,6};
    cout<<first_occ(arr, n, 6, 0)<<endl;
    cout<<last_occ(arr, n, 8, n-1);

    return 0;
}