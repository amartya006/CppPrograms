#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	for(int i=0;i<t; i++){
		int n;
		cin>>n;
		
		int arr[n];
		for(int j=0; j<n; j++){
			cin>> arr[j];
		}
		int max=INT_MIN;
		int r=0;
		for(int j=0; j<n; j++){
			
			if(j==n-1){
				if(arr[j]>max){
					r+=1;
					max=arr[j];
				} 
			}
			else if(arr[j]>max && arr[j] > arr[j+1]){
					r+=1;
					max= arr[j];
			}
		}
		cout<<r<<endl;
	}
	return 0;
}
