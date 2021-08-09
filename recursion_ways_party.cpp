#include<bits/stdc++.h>
using namespace std;

int ways_party(int n){
	//Base Case
	if(n==1){
		return 1;
	} else if(n==2){
		return 2;
	}
	//Recursive Intution
	int case1 = ways_party(n-1);
	int case2 = (n-1)*ways_party(n-2);
	//Self Work
	return case1 + case2;
}

int main(){
	int n;
	cin>>n;
	int result = ways_party(n);
	cout<<result<<endl;
	
	return 0;
}
