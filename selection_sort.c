#include<stdio.h>
#include<conio.h>


int main(){
	int n,i;
	scanf("%d", &n);
	
	int arr[n];
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n-1; i++){
		
		int j;
		for(j=i+1; j<n; j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
