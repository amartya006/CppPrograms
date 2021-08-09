#include<iostream>
using namespace std;

int first_occ(int arr[], int n, int key, int i){
	if(i==n){
		return -1;
	}
	
	if(arr[i] == key){
		return i;
	}
	
	return first_occ(arr, n, key, i+1);
}

int main(){
	
	int arr[] = {1,3,5,6,8,9,12};
	cout<<first_occ(arr,7,6,0)<<endl;
	return 0;
}
