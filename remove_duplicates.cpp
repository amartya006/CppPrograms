#include<bits/stdc++.h>
using namespace std;

string removeDup(string s){
    //Base Case
    if(s.length()==0){
        return "";
    }

    char ch = s[0];
    string ans = removeDup(s.substr(1));

    //Self Work
    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;
}

int main(){
    string s = "aaaababcdede";
    cout<<removeDup(s);
    return 0;
}