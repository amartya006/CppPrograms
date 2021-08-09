#include<bits/stdc++.h>
using namespace std;

void subString(string s, string osf){
if(s.length()==0){
    cout<<osf<<endl;
    return;
}

    char ch = s[0];
    string ros = s.substr(1);
    subString(ros, osf);
    subString(ros, osf+ch);
    
    
}

int main(){
    subString("ABC", "");
    return 0;
}