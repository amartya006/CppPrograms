#include<bits/stdc++.h>
using namespace std;

// Time Complexity : nlog(n)

// int main(){
//     int n,k;
//     cin>>n>>k;
//     vector<int> v(n);
//     for(auto &i : v){
//         cin>>i;
//     }

//     multiset<int, greater<int>> s;
//     vector<int> ans;
//     for(int i=0; i<k; i++){
//         s.insert(v[i]);
//     }
//     ans.push_back(*s.begin());

//     for(int i=k; i<n; i++){
//         s.erase(s.lower_bound(v[i-k]));
//         s.insert(v[i]);
//         ans.push_back(*s.begin());

//     }

//     for(auto i: ans){
//         cout<<i<<" ";
//     }

//     return 0;
// }

//Time Complexity: O(n)

vector<int> SlidingWindowMax(vector<int>& nums, int k){
    deque<int> dq;
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        if(!dq.empty() && dq.front() == i-k){
            dq.pop_front();
        }

        while(!dq.empty() && nums[i]>nums[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);

        if(i>=k-1){
            ans.push_back(nums[dq.front()]);
        }

    }

    return ans;

}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(auto &i : nums){
        cin>>i;
    }

    vector<int> result = SlidingWindowMax(nums, k);
    for(auto i: result){
        cout<<i<<" ";
    }
    return 0;
}