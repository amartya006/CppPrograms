#include<iostream>
using namespace std;

int binary_search(int n, int arr[], int key){
	int s=0;
	int e=n-1;
	
	while(s<=e){
		int mid=(s+e)/2;
		if(key==arr[mid]){
			return mid;
		} else if(key<arr[mid]){
			e=mid-1;
		} else if(key>arr[mid]){
			s=mid+1;
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	
	int pos= binary_search(n, arr, key);
	cout<<pos;
	
	return 0;
}
