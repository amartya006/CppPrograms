#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	for(int i=n; i>0; i--){
		for(int j=0; j<i; j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
} 

/* int main(){
	int n;
	cin>>n;
	
	for(int i=n; i>0; i--){
		for(int j=1; j<=n; j++ ){
			if(j>=i){
				cout<<"* ";
			} else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
} */