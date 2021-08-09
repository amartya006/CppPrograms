#include<bits/stdc++.h>
using namespace std;

void substringCode(string s, string osf){
    if(s.length()==0){
        cout<<osf<<endl;
        return;
    }

    char ch=s[0];
    substringCode(s.substr(1), osf);
    substringCode(s.substr(1), osf + ch);
    substringCode(s.substr(1), osf + to_string (int(ch)));
}

int main(){
    substringCode("ABCD","");
    return 0;
}
