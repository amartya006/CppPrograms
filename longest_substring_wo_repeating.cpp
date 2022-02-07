#include<bits/stdc++.h>
using namespace std;

int long_substring_better(string s){
    unordered_set<char> char_set;
    int l=0, r=0;
    int length, max_len=0;
    while (r<=s.size()-1){
        if(char_set.find(s[r]) != char_set.end()){
            char_set.erase(s[l]);
            l++;
        } else{
            length = r-l+1;
            if(length>max_len){
                max_len = length;
            }
            char_set.insert(s[r]);
            r++;
        }
        
    }
    return length;
}

int main(){
    string s;
    s="abcaabcdba";
    int result = long_substring_better(s);
    cout<<result;
    return 0;
}