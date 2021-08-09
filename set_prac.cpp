#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(2);
	
	for(auto i= s.begin();  i != s.end(); i++){
		cout<<*i<<endl;
	}
	cout<<*s.lower_bound(2)<<endl;
}