#include<stdio.h>
int main(){
	int arr[50],n,i,j,temp;
	
	printf("Enter no of elements:");
	scanf("%d",&n);
	
	printf("Enter Elements:");
	
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(arr[j] > arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Sorted elements are:");
	
	for(i=0;i<n;i++)
		printf("%d",arr[i]);
	return 0;
}
