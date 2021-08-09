#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char a[n+1];
    char r[n+1];
    cin>> a;
    bool ch= true;
    for(int i=0; i<n/2; i++){
        if(a[i] != a[n-1-i]){
            ch= false;
            break;
        }
    }

    if(ch== true){
        cout<<"It is a Palindrome";
    } else{
        cout<<"It is not a Palindrome";
    }

    return 0;
}