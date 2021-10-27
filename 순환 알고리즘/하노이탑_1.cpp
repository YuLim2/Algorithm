#include<stdio.h>
void hanoi(int n, char a, char b, char c){	//내부의 자리가 바뀌어도 지정한 abc는 고 
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
	scanf("%d", &n);정 
	hanoi(n, 'A', 'B', 'C');
	printf("%d %d", cnt, cnt1);
	return 0;
}
