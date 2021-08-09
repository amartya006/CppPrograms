#include<iostream>
using namespace std;

void fib(int s){
	int t1=0,t2=1,n;
	for(int i=1; i<=s; i++){
		cout<<t1<<" ";
		n=t1+t2;
		t1=t2;
		t2=n;
	}
	
}


int main(){
	int n;
	cin>>n;
	fib(n);
	return 0;
}
