#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
	int ans=0, x=1;
	while(n>0){
		int y=n%10;
		ans+=x*y;
		x*=2;
		n/=10;
	}
	return ans;
}

int octalToDecimal(int n){
	int ans=0, x=1;
	while(n>0){
		int y=n%10;
		ans+=x*y;
		x*=8;
		n/=10;
	}
	return ans;
}


int hexadecimalToDecimal(string n){
	int ans=0,x=1;
	for(int i=n.size()-1; i>=0; i--){
		if(n[i]>='0' && n[i]<='9'){
			ans+=x*(n[i]-'0');
			
		} else if(n[i]>='A' && n[i]<='F'){
			ans+=x*(n[i]-'A'+10);
		}
		x*=16;
	}
	return ans;
}


int decimalToBinary(int n){
	int ans=0, x=1;
	while(x<=n){
		x*=2;
	}
	x/=2;
	
	while(x>0){
		ans=ans*10 + n/x;
		n-=x;
		x/=2;
		
	}
	return ans;
}


int decimalToOctal(int n){
	int ans=0, x=1;
	while(x<=n){
		x*=8;
	}
	x/=8;
	
	while(x>0){
		ans=ans*10 + n/x;
		n-=x*(n/x);
		x/=8;
		
	}
	return ans;
}

string decimalToHexadecimal(int n){
	int x=1;
	string ans="";
	while(x<=n){
		x*=16;
	}
	x/=16;
	
	while(x>0){
		int l= n/x;
		if(x<=9){
			ans= ans+ to_string(l);
		
		} else{
			ans.push_back('A'+ (l) -10 )
		}
		n-=x*(l);
		x/=16;
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	
	cout<<decimalToHexadecimal(n);
	
	return 0;
}
