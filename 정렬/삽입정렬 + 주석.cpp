#include<stdio.h>
int main(){
	int i, j, n=4, temp, key;
	int list[4] = {4, 5, 1, 2};
	for(i=1; i<n; i++){		//2��° �ε������� key�� ���� 
		key = list[i];	
		for(j=i-1; j>=0 && list[j]>key; j--){	//key �տ��� key���� ũ�� 
			list[j+1] = list[j];	//�ڷ� �ڸ� �ٲٱ� 
		}
		list[j+1] = key;	//������ key�� �ٲٱ� 
	}
	for(i=0; i<n; i++){
		printf("%d ", list[i]);
	}
	return 0;
} 
