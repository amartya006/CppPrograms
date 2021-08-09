#include <stdio.h>
int main()
{
    int i,n,new1,new2;
    int arr[n];
    printf("enter the no. of elements you want to write \n");
    scanf ("%d",&n);
    
    for( i=0;i<n;i++){
    	printf("enter your %d number \n",i+1);
    	scanf("%d",&arr[i]);
	}
    
    
    printf("your no in arrays are");
    for( i=0;i<n;i++){
        printf("%5d",arr[i]);
    }
    printf("\n");
    printf("enter the value to change Ist element of array\n");
    scanf("%d",&new1);
    
    if(arr[0]!=0){
        arr[0]=new1;
    }
    printf("enter the value to change 3rd element of array\n");
    scanf("%d",&new2);
    
    if(arr[2]!=0){
        arr[2]=new2;
    }
    printf("your no in arrays are \n");
    for( i=0;i<n;i++){
        printf("%5d",arr[i]);
    }
    return 0;
    }
