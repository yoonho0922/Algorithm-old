#include<stdio.h>

int main(void){
	int i, j, tmp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(i = 0; i<10; i++){
		for(j=0; j<9-i; j++){
			if(array[j]>array[j+1]){
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			}
		}
	}
	
	for(i=0; i<10; i++){
		printf("%d ", array[i]);
	}
	return 0;
}
