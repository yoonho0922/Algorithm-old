#include<stdio.h>

int arr[1000000];

void quickSort(int* arr, int start, int end){
	if(start >= end){
		return;
	}
	
	int key = start;
	int i = start+1;
	int j = end;
	int tmp;
	
	while(i<=j){
		while(i<=end && arr[i]<=arr[key]){
			i++;
		}
		while(j>=start && arr[j]>=arr[key]){
			j--;
		}
		if(i>j){
			tmp = arr[j];
			arr[j] = arr[key];
			arr[key] = tmp;
		}else{
			tmp = arr[j];
			arr[j] = arr[i];
			arr[i] = tmp;
		}
	}
	
		quickSort(arr, start, j-1);
	quickSort(arr, j+1, end);  
}

int main(void){
	int n;
	scanf("%d", &n);

	for(int i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	quickSort(arr, 0, n-1);
	
	
	for(int i = 0; i<n; i++){
		printf("%d\n", arr[i]);
	}
}
