#include<iostream>
using namespace std;

int main(){
	int a;
	a=10;
	int *aptr;
	aptr = &a; 
	
	cout<<*aptr<<endl;
	aptr++;
	cout<<aptr;
	
	
	//int arr[] = {10,20,30};
	
	
	//int *ptr = arr;
	
	/* cout<<ptr<<" "<<*ptr;
	for(int i=0; i<3; i++){
		cout<<*(arr+i)<<" ";
		
	}
	cout<<arr+1<<endl; */
	
}
