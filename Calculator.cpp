#include<iostream>
using namespace std;

int main(){
	char op;
	cout<<"Enter Operation:";
	cin>>op;
	int n1,n2;
	cout<<"Enter Two Numbers:";
	cin>>n1>>n2;
	
	switch(op){
		case '+':
			cout<< n1 + n2;
			break;
		case '-':
			cout<< n1 - n2;
			break;
		case '*':
			cout<< n1 * n2;
			break;
		case '/':
			cout<< n1 / n2;
			break;
		default:
			cout<<"Operator Not Found";
			break;
	} 
	return 0;
}  
	
