#include <stdio.h>
int main() {
	int n, sum = 0;
	scanf("%d", &n);
	printf("1");	//1을 미리 출력 
	for(int i=1; i<n; i++){
		if((n%i == 0) && (i !=1)){	//1을 제외한 약수일 때 
			sum += i;
			printf(" + %d", i);
		}
	}
	printf(" = %d", sum+1);		//출력시 미리 출력한 1을 더해줌 
	return 0;
}

