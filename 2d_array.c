#include<stdio.h>
#include<conio.h>

int main(){
    int n,m;
    scanf("%d %d", &n, &m);

    int a[n][m],i,j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("2D Array o/p: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d", a[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}