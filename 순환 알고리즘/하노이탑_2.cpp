#include<stdio.h>    //ǥ�� �����
void hanoi(int n, char a, char b, char c){    //�ϳ��̶�� �Լ� ����
	if(n==1){ 
		printf("%d:%c->%c\n", n, a, c);
	} else{
		hanoi(n-1, a, c, b);
		printf("%d:%c->%c\n", n, a, c);
		hanoi(n-1, b, a, c);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}
