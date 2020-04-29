#include<stdio.h>
#include<stdlib.h>

int n;
int arr[16] = {3,4,2,1,5,6,7,8,9,10,11,12,13,14,15,16};

int k=0;

void merge(int ls, int le, int rs, int re){
	int lptr = ls, rptr = rs, bptr = 0;
	int *brr = (int*) calloc((le-ls)+(re-rs)+2, sizeof(int));
	
	while(lptr<=le && rptr <=re){
		if(arr[lptr]<arr[rptr])
			brr[bptr++] = arr[lptr++];
		else
			brr[bptr++] = arr[rptr++];
	}
	if(lptr > le){	//left�� �� ä�������  
		for(int i = rptr; i<=re; i++)
			brr[bptr++] = arr[i];
	}else{	//right�� �� ä���� ���  
		for(int i = lptr; i<=le; i++)
			brr[bptr++] = arr[i];
	}
	
	//���ĵ� �迭�� �� �迭�� �ֱ�
	int j=0; 
	for(int i=ls; i<=re; i++){
		arr[i] = brr[j++];
	}
}

void merge_sort(int s, int e){
		
	//merge sort ȣ�� �� 
	//printf("%d ��\n", ++k); 
	
	if(s==e){
		return;
	}
	int mid = (s+e)/2;
	merge_sort(s, mid);
	merge_sort(mid+1,e);
	merge(s, mid, mid+1, e);
}

int main(void){
	merge_sort(0, 15);
	for(int i=0; i<16; i++){
		printf("%d, ", arr[i]);
	}
	printf("\n");
}
