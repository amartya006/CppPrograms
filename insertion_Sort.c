#include<stdio.h>
#include<conio.h>


int main(){
	int n;
	scanf("%d", &n);
	
	int arr[n],i;
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=1; i<n; i++){
		int current= arr[i];
		int j=i-1;
		while(current<arr[j] && j>=0){
			arr[j+1]= arr[j];
			j--;
		}
		arr[j+1]=current;
	}
	
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
