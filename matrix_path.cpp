#include<bits/stdc++.h>
using namespace std;

int totalPaths = 0;
void mazePath(int i, int j, int n, int m, string osf){
	if(i==n-1 && j==m-1){
		
		cout<<osf<<endl;
		totalPaths++;
		return;
	} else if(i>=n || j>=m){
		return;
	}
	
	
	mazePath(i, j+1, n, m, osf + "R");
	mazePath(i+1, j, n, m, osf + "D");
	mazePath(i+1, j+1, n, m, osf + "Di");
	
}

int main(){
	mazePath(0, 0, 3, 3, "");
	cout<<totalPaths<<endl;
	return 0;
}
