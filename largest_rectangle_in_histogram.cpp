#include<bits/stdc++.h>
using namespace std;

int LargestArea(vector<int> heights){
    int n = heights.size();
    vector<int> leftSmall(n);
    vector<int> rightSmall(n);
    stack<int> st;
    for(int i=0; i<n; i++){
        while(!st.empty() && heights[st.top()]>=heights[i]){
            st.pop();
        }

        if(st.empty()){
            leftSmall[i] = 0;
        } else{
            leftSmall[i] = st.top()+1;
        }
        st.push(i);
    }

    // for(auto i : leftSmall){
    //     cout<<i<<" ";

    // } cout<<endl;

    //Empty the Stack for right Small
    while(!st.empty()){
        st.pop();
    }

    for(int i=n-1; i>=0; i--){
        while(!st.empty() && heights[st.top()]>=heights[i]){
            st.pop();
        }

        if(st.empty()){
            rightSmall[i] = n-1;
        } else{
            rightSmall[i] = st.top()-1;
        }
        st.push(i);
    }

    // for(auto i : rightSmall){
    //     cout<<i<<" ";

    // } cout<<endl;

    int maxArea = 0;
    for(int i=0; i<n; i++){
        maxArea = max(maxArea, (rightSmall[i] - leftSmall[i] + 1)* heights[i]);
    }
    return maxArea;
    
}

int main(){
    int n;
    cin>>n;
    vector<int> height(n);
    int j;
    for(int i=0; i<n; i++){
        cin>>j;
        height.push_back(j);
    }

    int result = LargestArea(height);
    cout<<result<<endl;
    return 0;
}