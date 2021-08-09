#include<bits/stdc++.h>
using namespace std;

void reverse(string str, int n){
    //Base Case
    if(n<=0){
        return;
    } 

    //Self Work
    cout<<str[n-1];

    //Recursive Intution
    reverse(str, n-1);
}

void reverse2(string s){
    if(s.length() == 0){
        return;
    } 
    string ros = s.substr(1);
    reverse2(ros);
    cout<<s[0];
}

int main(){
    string str = "binod";
    reverse(str, 5);
    cout<<endl;
    reverse2(str);
    return 0;
}