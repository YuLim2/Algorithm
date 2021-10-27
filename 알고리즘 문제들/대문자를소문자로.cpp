#include<stdio.h>
int main(){
	char a[101], b[101];	
	int i, p=0;	
	gets(a);
	for(i=0; a[i]!='\0'; i++){	//배열의 끝까지 
		if(a[i]!=' '){	//공백이 아니라면 
			if(a[i]>=65 && a[i]<=90){	//대문자라면 
				b[p++]=a[i]+32;		//b배열에 소문자로 입력 
			}
			else b[p++]=a[i];	//b배열에 그냥 입력 
		}
	}
	b[p]='\0';	//배열의 끝 표현 
	printf("%s\n", b);	
	return 0;
}
	
