#include<stdio.h>

int main(void){
	int temp;
	int count[5];
	
		for(int i = 0; i<5; i++){	//count ��� 0���� �ʱ�ȭ  
			count[i] = 0;
		}
	
	int array[20] = {1,3,2,4,3,2,5,3,1,2,3,
						4,4,5,1,2,3,5,2,3};

	for(int i = 0; i<20; i++){
		count[array[i] -1] ++;
	}
	for(int i = 0; i < 5; i++){
		if(count[i] != 0 ){
			for(int j = 0; j<count[i]; j++){
				printf("%d", i + 1);
			}
		}
	}
	return 0;
}
