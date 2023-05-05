#include<stdio.h>

int bubbleSort(int arr[], int n){
	
	int i,j,temp;
	
	for(i=0 ; i<n-1 ; i++){
		for(j=0 ; j<n-i-1 ; j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}


int main(){
	
	int arr[] = {12,5,32,67,22,1,3,2};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,n);
	printf("Bubble sort:\n");
	for(int i=0 ; i<n ; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}