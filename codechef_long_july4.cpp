#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n;
	    cin>>n;
	    vector<int> s;
	    for(int j=0; i<n; j++){
	        int a;
	        cin>>a;
	        s.push_back(a);
	    }
	    
	    int max = *max_element(s.begin(), s.end());
	    vector<int>::iterator it1 = find(s.begin(), s.end(), max);
	    int index1 = distance(s.begin(), it1);
	    
	    int min = *min_element(s.begin(), s.end());
	    vector<int>::iterator it2 = find(s.begin(), s.end(), min);
	    int index2 = distance(s.begin(), it2);
	    int sum =0;
	    for(int j=0; j<s.size(); j++){
	        if(j==index1 || j== index2){
	            sum+= (min/min);
	        } else{
	            sum+=( (s[j])/min);
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
