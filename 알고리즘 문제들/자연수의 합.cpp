#include <stdio.h>
int main() {
	int a, b, sum = 0;
	scanf("%d %d", &a, &b);	
	for(int i=a; i<=b; i++){	//a���� b���� 
		if(i<=b-1){	//������ �� �ϳ� ������ 
		printf(" %d +", i);
			sum += i;
			}
		else{
			printf(" %d =", i);	//������ �� 
		}
	}
	sum += b;
	printf(" %d", sum);	//���� 
	return 0;
}

