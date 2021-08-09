#include<stdio.h>
#include<conio.h>

int main(){
	int m,n,i;
	scanf("%d %d", &m,&n);
	int a[m],b[n];
	for(i=0; i<m; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++){
		scanf("%d",& b[i]);
	}
	float sum1=0, sum2=0;
	for(i=0; i<m; i++){
		sum1+=a[i];
	}
	for(i=0; i<n; i++){
		sum2+=b[i];
	}
	float avg1=sum1/m;
	float avg2=sum2/n;
	
	printf("%f", avg1-avg2);
	return 0;
}
