#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int max= *max_element(arr,arr+n);
    int min= *min_element(arr,arr+n);
    int sum=0;
    for(int i=0; i<n; i++){
    	sum+=arr[i];
	}
	
	cout<<sum-max<<" "<<sum-min;
    return 0;
}
