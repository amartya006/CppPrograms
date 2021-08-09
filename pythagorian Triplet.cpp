#include<iostream>
#include<cmath>
using namespace std;

bool isPyth(int a,int b,int c){
	int m=max(a, max(b,c));
	if(m==a){
		return pow(m,2)==pow(b,2)+pow(c,2);
	}  else if(m==b){
		return pow(m,2)==pow(a,2)+pow(c,2);
	} else{
		return pow(m,2)==pow(b,2)+pow(a,2);
	}
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(isPyth(a,b,c)){
		cout<<"Yes it is a Pythagorian Triplet";
	} else{
		cout<<"No it is not a Pythagorian Triplet";
	}
	return 0;
}
