#include<iostream>
using namespace std;


void increment(int *a){
	*a++;
}
	
int main(){

	int a=9;
	
	int *aptr = &a;
	increment(aptr);
	cout<<*aptr;
	return 0;
}
