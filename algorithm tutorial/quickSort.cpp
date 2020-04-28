#include <stdio.h>

int number = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int *data, int start, int end){
	if(start >= end){ //���Ұ� 1���� ��� 
		return;
	}
	
	int key = start;
	int i = start + 1;
	int j = end;
	int temp;
	
	while(i<=j){//������ ������ �ݺ�
		while(i<=end && data[i] <= data[key]){//Ű �� ���� ū ���� ������ ���� 
			i++;
		}
		while(data[j]>=data[key] && j> start){ //Ű�� ���� ���� ���� ���� �� ���� 
			j--; 
		}
		if(i>j){ //������ ���¸� Ű �� ��ü
			temp = data[j];
			data [j] = data[key];
			data[key] = temp;
		}else{	//�� ������ ���¸� i j �ٲ��ֱ� 
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
			
	}
	
	quickSort(data, start, j-1);
	quickSort(data, j+1, end);  


}
	 
 
int main(void){
	
	quickSort(data, 0, 9);
	
	for(int i=0; i<10; i++){
		printf("%d ", data[i]);
	}
	return 0;
	
}
