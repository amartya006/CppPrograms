#include<iostream>
#include<vector>
using namespace std;


int migratoryBirds(vector<int> arr) {
    vector< pair<int,int> > v;
    for(int i=1; i<=5; i++){
        v[i-1].first= i;
        v[i-1].second= 0;
    }
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==1){
            v[0].second++;
        } else if(arr[i]==2){
            v[1].second++;
        } else if(arr[i]==3){
            v[2].second++;
        } else if(arr[i]==4){
            v[3].second++;
        } else if(arr[i]==5){
            v[4].second++;
        }
    }
     sort(v.begin(), v.end(), comparison);
     return(v[0].second);
     
    

}

