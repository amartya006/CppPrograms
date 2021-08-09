#include<bits/stdc++.h>
#include<string>
using namespace std;

int total(vector<string> v, int n){
	string test;
	int flag;
	int c=0;
	size_t f;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			test= v[i]+ v[j];
			flag=1;
			for(int i=0; i<10; i++){
				char ch=i;
				f= test.find(ch);
				if(f==string::npos){
					flag=0;
					break;
				}
			}
			if(flag==1){
				c++;
			}
		}
	}
	return c;
}

int main(){
	vector<string> v;
	string s;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		v.push_back(s);
	}
	
	
	
	int result= total(v,n);
	cout<<result<<endl;
	
	return 0;
}
