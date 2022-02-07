#include<bits/stdc++.h>
using namespace std;

vector<int> StockSpan(vector<int> prices){
    vector<int> ans;
    stack<pair<int,int>> st;
    int n= prices.size();
    for(int i=0; i<n; i++){
        int days=1;
        while(!st.empty() && st.top().first <= prices[i]){
            days+=st.top().second;
            st.pop();
        }
        st.push({prices[i], days});
        
        ans.push_back(days);
    }

    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i: v){
        cin>>i;
    }
    vector<int> res = StockSpan(v);
    for(auto i: res){
        cout<<i<<" ";
    }
    return 0;
}