#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a==b && b==c && c==a){
		cout<<"This is an Equilateral Triangle";
	} else if(a==b || b==c || c==a){
		cout<<"This is an Isosceles Triangle";
	} else{
		cout<<"This is a Scalene Triangle";
	}
	return 0;
}
