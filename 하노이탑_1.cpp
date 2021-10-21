#include<stdio.h>
void hanoi(int n, char a, char b, char c){
	if(n<=1){
		printf("%d:%c->%c\n", n, a, c);
	} else{
		hanoi(n-1, a, c, b);
		cnt1++;
		printf("%d:%c->%c\n", n, a, c);
		hanoi(n-3, b, a, c);
	}
	cnt++;
}

int main(){
	int n=4;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	printf("%d %d", cnt, cnt1);
	return 0;
}
