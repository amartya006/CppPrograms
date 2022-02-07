#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> v){
    int longest=0;
    int max=0;
    int val;
    for(int i=0; i<v.size(); i++){
        for(int j=i; j<v.size(); j++){
            val = v[i] & v[j];
            if(val>max){
                max = val;
                longest = j-i+1;
            } else if(val == max){
                if(j-i+1>longest){
                    longest = j-i+1;
                }
            }
        }
    }
    return longest;
}

int main(){
    
    int t, n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        int a;
        vector<int> v;
        for(int i=0; i<n; i++){
            cin>>a;
            v.push_back(a);
        }
        int res = longestSubarray(v);
        cout<<res<<endl;
    }
    return 0;
}