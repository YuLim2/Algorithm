#include<stdio.h>
int main(){
	int i, j, n=4, temp, key;
	int list[4] = {4, 5, 1, 2};
	for(i=1; i<n; i++){		//2번째 인덱스부터 key로 지정 
		key = list[i];	
		for(j=i-1; j>=0 && list[j]>key; j--){	//key 앞에서 key보다 크면 
			list[j+1] = list[j];	//뒤로 자리 바꾸기 
		}
		list[j+1] = key;	//끝나면 key값 바꾸기 
	}
	for(i=0; i<n; i++){
		printf("%d ", list[i]);
	}
	return 0;
} 
