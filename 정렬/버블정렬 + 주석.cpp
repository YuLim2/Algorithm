#include<stdio.h>
int main(){
	int i, j, n=4, temp;
	int list[4] = {4, 5, 1, 2};
	for(i=n-1; i>0; i--){	//고정이 되는 인덱스 순서 
		for(j=0; j<i; j++){	  //맨 앞에서 
			if(list[j] > list[j+1]){	//바로 뒤의 값이랑 비교 
				temp = list[j];		//스왑 
				list[j] = list[j+1];
				list[j+1] = temp;
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%d ", list[i]);
	}
}  
