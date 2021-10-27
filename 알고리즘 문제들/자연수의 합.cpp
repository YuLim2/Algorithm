#include <stdio.h>
int main() {
	int a, b, sum = 0;
	scanf("%d %d", &a, &b);	
	for(int i=a; i<=b; i++){	//a부터 b까지 
		if(i<=b-1){	//마지막 수 하나 전까지 
		printf(" %d +", i);
			sum += i;
			}
		else{
			printf(" %d =", i);	//마지막 수 
		}
	}
	sum += b;
	printf(" %d", sum);	//총합 
	return 0;
}

