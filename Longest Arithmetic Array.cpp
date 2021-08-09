#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	for(int j=0; j<t; j++){
		
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		
		int pd=arr[1]-arr[0];
		int len=2;
		int max=2;
		
		for(int i=2; i<n; i++){
		if(arr[i]- arr[i-1]==pd){
			len+=1;
			if(max<len){
				max=len;
			}
		} else{
			len=2;
		}
		pd = arr[i]- arr[i-1];
	}
	cout<<max<<endl;
	}
	
	return 0;
}
