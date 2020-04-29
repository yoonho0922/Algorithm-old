#include<stdio.h>

int n = 8;
int arr[8] = {5,1,4,3,8,2,6,7};

void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int split(int s, int e, int A[]){
	int pivot, left, right;
	pivot = A[s]; left = s+1; right = e;
	
	while(left<=right){
		while((A[right] >= pivot)&&(left<=right))
			right--;
		while((A[left] <= pivot)&&(left<=right))
			left++;
		
		if(left<=right)
			swap(&A[right], &A[left]);
	}
	
	swap(&A[right], &A[s]);
	return right;
}

void quick_sort(int s, int e, int A[]){
	if(s>=e)
		return;
	int m = split(s, e, A);
	quick_sort(s, m-1, A);
	quick_sort(m+1, e, A);
}

int main(void){

	quick_sort(0,n-1, arr);
	for(int i=0; i<n; i++)
		printf("%d, ", arr[i]);
	printf("\n");

}


