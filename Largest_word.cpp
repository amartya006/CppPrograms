#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    char a[n+1];
    cin.getline(a, n);
    cin.ignore();
    int i=0;
    int maxLen=0, currLen=0;
    while(1){
        if(a[i]==' ' || a[i]=='\0'){
            if(maxLen<currLen){
                maxLen =currLen;
                
            }
            
            currLen=0;
        }
        else{
            currLen++;
        }

        if(a[i]=='\0'){
            break;
        }
        i++;
        
    }
    cout<<maxLen;
    return 0;
}