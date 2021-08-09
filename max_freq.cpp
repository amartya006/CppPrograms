#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string s="kfjkdsfsjklajllksfajvjjvjjjvjkajv";
    int a[26];
    for(int i=0; i<26; i++){
        a[i]=0;
    }

    for(int i=0; i<s.length(); i++){
        a[s[i]-'a']++;
    }
    int maxF=0;
    char ans='a';

    for(int i=0; i<26; i++){
        if(a[i]>maxF){
            maxF=a[i];
            ans=i+'a';
        }
    }
    cout<<maxF<<endl;
    cout<<ans;
    return 0;
}