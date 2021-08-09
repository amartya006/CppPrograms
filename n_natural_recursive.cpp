#include<bits/stdc++.h>
using namespace std;

void natural(int n){
	//Base Case
	if(n==1){
		cout<<n<<endl;
		return;
	}
	//Self Work
	cout<<n<<endl;
	//Resursive Intution/Assumption
	natural(n-1);
	//Self Work
	cout<<n<<endl;
	
	
}

int main(){
	int n;
	cin>>n;
	natural(n);
	return 0;
}
