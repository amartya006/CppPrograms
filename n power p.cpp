#include<iostream>
using namespace std;

int power(int n, int p){
	if(p==1){
		return n;
	}
	return n * power(n,p-1);
}

int main(){
	cout<<power(5,4);
	return 0; 
}
