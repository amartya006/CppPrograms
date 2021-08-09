#include<iostream>
using namespace std;

int sum_n(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	return sum;
}

int main(){
	int n;
	cin>>n;
	
	cout<<sum_n(n);
	return 0;
}
