#include<stdio.h>
int main(){
	char a[100];
	int res=0, cnt=0, i;
	scanf("%s", &a);	//배열에 받기 
	for(i=0; a[i]!='\0'; i++){	//배열의 끝까지 
		if(a[i]>=48 && a[i]<=57){	//아스키코드로 숫자인지 문자인지 확인 
			res=res*10+(a[i]-48);	//자리 밀어주고 문자로 받은 숫자 데이터 변환해서 합산 
		}
	}
	printf("%d\n", res);
	for(i=1; i<=res; i++){	//숫자 수 세기 
		if(res%i==0) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
