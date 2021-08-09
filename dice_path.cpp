#include<iostream>
#include<string>
using namespace std;

void dicePath(int n, int i, string osf){
	
	if(i>=n){
		return;
	}
	if(i == n-1){
		cout<<osf<<endl;
		return;
	}
	
	for(int j=1; j<=6; j++){
		dicePath(n, i+j, osf + to_string(j)+"->");
	}
}

int main(){
	
	dicePath(4, 0, "");
	return 0;
}
