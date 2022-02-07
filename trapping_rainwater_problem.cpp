#include<bits/stdc++.h>
using namespace std;

int rainwaterTrapped(vector<int> height){
    int n = height.size();
    int left = 0, right = n-1;
    int maxLeft = 0, maxRight = 0;
    int res = 0;

    while(left<=right){
        if(height[left]<=height[right]){
            if(height[left]>maxLeft){
                maxLeft = height[left];
            } else{
                res+=maxLeft-height[left];
            }
            left++;
        } else{
            if(height[right]<=height[left]){
                if(height[right]>maxRight){
                    maxRight = height[right];
                } else{
                    res+=maxRight-height[right];
                }
                right--;
            }
        }
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int> height;
    int el;
    for(int i=0; i<n; i++){
        cin>>el;
        height.push_back(el);
    }

    int res = rainwaterTrapped(height);
    cout<<res;
    return 0;
}