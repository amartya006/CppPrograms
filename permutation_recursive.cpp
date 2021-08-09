#include<bits/stdc++.h>
using namespace std;
string ans = "";
void permu(string s, string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}
	for(int i=0; i<s.length(); i++){
		char ch= s[i];
		permu(s.substr(0,i) + s.substr(i+1), ans + ch);
		
	}
	
	
	
}

int main(){
	permu("ABC", "");
	return 0;
}
