#include<iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	if(a==0){
		printf("Neither Even Nor Odd");
	} else if(a%2==0){
		printf("Even");
	} else{
		printf("Odd");
	}
}
