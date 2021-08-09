#include<bits/stdc++.h>
using namespace std;

void replace(string str){
    //Bsse Case
    if(str.length()==0){
        return;
    } 

    
    

    //Self Work
    if(str[0]=='p' && str[1] == 'i'){
        cout<<"3.14";

        //Recursive Intution
        replace(str.substr(2));
    } else{
        cout<<str[0];

        //Recursive Intution
        replace(str.substr(1));
    }
}

int main(){
    string str = "piabpi261p4pi";
    replace(str);
    return 0;
}