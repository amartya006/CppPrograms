#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	for(int i=n; i>=1; i--){
		int j;
		for(j=1; j<=i-1;++j){
			cout<<" ";
		}
		
		for(int k=1; k<=n; k++){
			cout<<k<<" ";
		}
		cout<<endl;
	}
	return 0;
}
