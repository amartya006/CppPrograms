#include<bits/stdc++.h>
using namespace std;

int n_power_p(int n, int p){
	if(p==1){
		return n;
	}
	
	return n* n_power_p(n,p-1);
}

int main(){
	int n,p;
	cin>>n>>p;
	
	cout<<n_power_p(n,p);
	
	return 0;
}
