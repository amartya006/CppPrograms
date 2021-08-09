#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string str="5421141871862";
    sort(str.begin(), str.end(), greater<int>());
    cout<<str;
}