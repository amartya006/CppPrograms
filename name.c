#include<stdio.h>
#include<conio.h>

int main(){
	char n[5+1];
	int i;
	for(i=0; i<5 ; i++){
		scanf("%c", &n[i]);
	}
	
	for(i=0; i<5; i++){
		printf("%c", n[i]);
	}
	return 0;
}
