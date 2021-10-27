나이차이
#include <stdio.h>
int main() {
	int n, max=-1, min=1000, t;		//max는 -1, min은 1000으로 선언 
	scanf("%d", &n);	//몇 명 입력받는지 
	for(int i=0; i<n; i++) {
	scanf("%d", &t);	//그 수만큼 나이 입력 
	if(max<t) max=t;	//max란 수를 조건에 맞추어 갱신 
	if(min>t) min=t;	//min이란 수를 조건에 맞추어 갱신
} printf("%d", max-min);
}
