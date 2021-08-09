#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int a[n],i;
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++){
		printf("%d", a[i]);
		printf(" ");
	}
	printf("\n");
	
	a[0]= scanf("%d", &a[0]);
	a[1]=scanf("%d", &a[1]);
	
	for(i=0; i<n ; i++){
		printf("%d", a[i]);
		printf(" ");
	}
	return 0;
}
