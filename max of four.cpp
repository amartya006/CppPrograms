#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    int max;
    if(a>b){
        if(a>c){
            max=a;
        } else{
            max=c;
        }
        
    } else{
        if(b>c){
            max=b;
        } else{
            max=c;
        }
        
    }
    if(max<d){
        max=d;
    }
    return max;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
