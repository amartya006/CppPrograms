#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,arms,sum=0;
	cin>>n;
	int temp=n;
	
	while(n>0){
		int r=n%10;
		n=n/10;
		arms=sum+=pow(r,3);
	}
	cout<<arms<<endl;
	if(arms==temp){
		cout<<"Armstrong";
	} else{
		cout<<"Not Armstrong";
	}
	return 0;
}
