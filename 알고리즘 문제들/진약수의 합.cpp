#include <stdio.h>
int main() {
	int n, sum = 0;
	scanf("%d", &n);
	printf("1");	//1�� �̸� ��� 
	for(int i=1; i<n; i++){
		if((n%i == 0) && (i !=1)){	//1�� ������ ����� �� 
			sum += i;
			printf(" + %d", i);
		}
	}
	printf(" = %d", sum+1);		//��½� �̸� ����� 1�� ������ 
	return 0;
}

