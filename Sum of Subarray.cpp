#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int i=0,j=0;
	int sum=0;
	int S;
	cin>>S;
	while(j<n && sum+arr[j]<=S){
		sum+=arr[j];
		j++;
	}
	
	if(sum+arr[j]==S){
		cout<"1 "<j;
		return 0;
	}
	
	while(j<n){
		if(sum<S){
			sum+=arr[j];
			j++;
			if(sum == S){
			cout<<i+1<<" "<<j;
			return 0;
		}
		}
		else if(sum>S){
			sum-=arr[i];
			i++;
			if(sum == S){
			cout<<i+1<<" "<<j;
			return 0;
		}
		}
		
	}
	
	return 0;
}
