#include<iostream>
using namespace std;

int swap(int a, int b){
	int temp=a;
	a=b;
	b=temp;
	int swapped[2] ={a,b};
	return swapped[2];
}

int main(){
	int a,b;
	cin>>a>>b;
	
	array ans=swap(a,b);
	for(int i=0;i<=1; i++){
		cout<<ans[i];
	}
	return 0;
}


