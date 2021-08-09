#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<"  ";
		}
		for(int j=i; j>=-i; j--){
			if(j!=0 && j!=-1){
				cout<<abs(j)<<" ";
			}
		}
		cout<<endl;
	}
}
