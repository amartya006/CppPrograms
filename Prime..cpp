#include<iostream>
using namespace std;

int main(){
	int a,b,i;
	cin>>a>>b;
	for(int j=a; j<=b;j++){
		for(i=2; i<j; i++){
		if(j%i==0){
			
			break;
		}
	}
	if(i==j){
		cout<<j<<"\n";
	}	
	}
	
}
