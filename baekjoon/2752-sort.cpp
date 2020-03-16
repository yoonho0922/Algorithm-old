#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



int main(void){
	int n;
	scanf("%d", &n);
	
	int *array = (int*)malloc(sizeof(int) * n);
	
	for(int i = 0; i<n; i++){
		scanf("%d", &array[i]);
	}
	
	int j, tmp;
	for(int i = 0; i<n-1; i++){
		j = i;
		while(j>=0 && array[j] > array[j+1]){
			if(array[j]>array[j+1]){
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			}
			j--;
		}
	}
	
	for(int i=0; i<n; i++){
		printf("%d\n", array[i]);
	}
}
