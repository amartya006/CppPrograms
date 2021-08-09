#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,target;
    cin>>n>>m>>target;
    int a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    int r=0, c=m-1;
    bool found= false;
    while(r<n && c>=0){
        if(a[r][c]==target){
            found= true;
            break;
        } else if(target>a[r][c]){
            r++;
        } else{
            c--;
        }
    }
    if(found){
        cout<<"Found at "<<r<<"-"<<c<<endl;
    } else{
        cout<<"Not Found";
    }

    return 0;
}