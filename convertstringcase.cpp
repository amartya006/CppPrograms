#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string str="AmaRtYa NIGam";
    for(int i=0; i<str.length(); i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    cout<<str<<endl;

    for(int i=0; i<str.length(); i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    cout<<str<<endl;

    //Method 2:

    string str1= "AMARTYA";
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    cout<<str1;

    return 0;
}
