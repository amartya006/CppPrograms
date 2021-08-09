#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    int b[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    b[n][n]= a[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            b[j][i]= a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

	return 0;
}
