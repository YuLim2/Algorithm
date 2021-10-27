#include<stdio.h>
int main(){
	int i, j, n=4, temp;	//temp는 스왑을 위한 공간 
	int list[4] = {4, 5, 1, 2};
	for(i=0; i<n-1; i++){	//기준이 되는 인덱스는 n-1개 
		k = i;	//i의 값 고정을 위해 k변수 사용 
		for(j=i+1; j<n; j++){	//i번지 뒤에 것 부터 끝까지 비교 
			if(list[j] > list[k]){	//비교 
				k = j;	//k변수에 바꾸어야 할 인덱스 저장 
			}
		}
		temp = list[i];	//스왑 
		list[i] = list[k];
		list[k] = temp;
	}
	for(i=0; i<n; i++){
		printf("%d ", list[i]);
	}
	return 0;
}
