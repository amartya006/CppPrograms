#include<iostream>
using namespace std;

void pattern1(int n,int i){
	if(n==0){
	return;
	} if(i<n){
		cout<<"* ";
		pattern1(n,i+1);
	} else{
		cout<<endl;
		pattern1(n-1,0);
	}
	
}

void pattern2(int n, int i){
	if(n==0){
		return;
	} if(i<n){
		pattern2(n,i+1);
		cout<<"* ";
	} else{
		pattern2(n-1, 0);
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	
	pattern2(n,0);
	return 0;
}
