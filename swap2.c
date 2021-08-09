#include<stdio.h>
#include<conio.h>


int swap(int a, int b){
	int temp=a;
	a=b;
	b=temp;
	int swapped[2] ={a,b};
	return swapped[2];
}

int main(){
	int a,b,i;
	scanf("%d %d", &a,&b);
	
	int ans[2]= swap(a,b);
	
	for(i=0; i<=1; i++){
		printf("%d ",ans[i]);
	}
	return 0;
}
