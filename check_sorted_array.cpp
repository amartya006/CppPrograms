#include<iostream>
using namespace std;

int array(int arr[], int n){
    if(n==1){
        return true;
    }
    bool restArr = array(arr+1 , n-1);
    return(arr[0] < arr[1] && restArr);
}

int main(){
    
    int arr[] = {1,2,5,4,5,6};

    cout<<array(arr,6);
    return 0;
}