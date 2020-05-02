#include<stdio.h>

int n = 8;
int arr[8] = {5,1,4,3,8,2,6,7};
int k = 3;

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

int quick_select(int k, int s, int e, int A[]){
	if(s==e)
		return A[s];

	int m = split(s, e, A);
	
	
	if(k==m)
		return A[m];
	else if(k<m)
		quick_select(k, s, m-1, A);
	else if(k>m)
		quick_select(k, m+1, e, A);
}

int main(void){

	for(int i =0; i<8; i++){
		printf("%d¹øÂ° °ª : %d \n", i, quick_select(i,0,n-1,arr)); 
	}
}


