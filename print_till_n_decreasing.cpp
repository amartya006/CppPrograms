#include<bits/stdc++.h>
using namespace std;

void print_dec(int n){
	if(n==1){
		cout<<n<<endl;
		return;
	}
	
	cout<<n<<endl;
	print_dec(n-1);
}

void print_inc2(int n){
	if(n==1){
		cout<<n<<endl;
		return;
	}
	
	print_dec2(n-1);
	cout<<n<<endl;
}


void print_inc(int n, int i){
	if(i==n){
		cout<<i<<endl;
		return;
	}
	
	cout<<i<<endl;
	print_inc(n, i+1);
}

int main(){
	int n;
	cin>>n;
	
	print_dec(n);
	cout<<endl;
	print_inc(n,1);	
	return 0;
}
