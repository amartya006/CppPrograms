#include<bits/stdc++.h>
using namespace std;

int split(int n, vector<int> x, vector<int> types){
	int hero = 1;
	int sp = 0;
	int flag=0;
	for(int i=0; i<n; i++){
		if(types[i]==2){
			while(x[i]>hero){
				int max = *max_element(x.begin()+flag+1, x.begin()+(i-1));
				int z = max_element(x.begin()+flag+1 , x.begin()+ i-1)- x.begin();
				x[z] = 0;
				cout<<"hello"<<endl;
				hero = hero + max -1;
				sp+=1;
				
			}
			flag=i;
		}
	}
	return sp;
}

int main(){
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		int n;
		cin>>n;
		vector<int> x;
		int a;
		for(int j=0; j<n; j++){
			
			cin>>a;
			x.push_back(a);
		}
		vector<int> types;
		int b;
		for(int j=0; j<n; j++){
			cin>>b;
			types.push_back(b);
		}
		cout<<split(n, x, types);
		
	}
	return 0;
}
