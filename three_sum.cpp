#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplets_3sum(vector<int>& vals){
    sort(vals.begin(), vals.end());
    vector<vector<int>> res;
    int n = vals.size();
    for(int i=0; i<n-2; i++){
        if(i==0 || (i>0 && vals[i] != vals[i-1])){
            int a = vals[i];
            int sum = 0 - a;
            int low = i+1 , high = n-1;
            while(low<high){

            
            if(vals[low] + vals[high] == sum){
                vector<int> temp;
                temp.push_back(a);
                temp.push_back(vals[low]);
                temp.push_back(vals[high]);
                res.push_back(temp);

                while(low<high && vals[low] == vals[low+1]) low++;
                while(low<high && vals[high] == vals[high-1]) high--;

                low++;
                high--;

            } else if(vals[low] + vals[high] < sum){
                low++;
            } else{
                high--;
            }
            }
        }
    }

    return res;
}

int main(){

    vector<int> v = {-1, -2, 2, 2,-2,-1,-1,2,0,0,0};
    vector<vector<int>> res = triplets_3sum(v);
    for(int i = 0; i<res.size(); i++){
        for(int j=0; j<res[i].size(); j++){
            cout<<res[i][j]<<" ";
        } cout<<endl;
    }
    return 0;
}