#include<iostream>
using namespace std;

int linear_search(int n, int array[], int key){
	for(int i=0; i<n; i++){
		if(key==array[i]){
			return i;
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	
	int array[n];
	for(int i=0; i<n; i++){
		cin>>array[i];
	}
	
	int key;
	cin>>key;
	
	int pos= linear_search(n,array,key);
	cout<<pos;
	return 0;
}
