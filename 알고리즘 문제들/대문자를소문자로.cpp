#include<stdio.h>
int main(){
	char a[101], b[101];	
	int i, p=0;	
	gets(a);
	for(i=0; a[i]!='\0'; i++){	//�迭�� ������ 
		if(a[i]!=' '){	//������ �ƴ϶�� 
			if(a[i]>=65 && a[i]<=90){	//�빮�ڶ�� 
				b[p++]=a[i]+32;		//b�迭�� �ҹ��ڷ� �Է� 
			}
			else b[p++]=a[i];	//b�迭�� �׳� �Է� 
		}
	}
	b[p]='\0';	//�迭�� �� ǥ�� 
	printf("%s\n", b);	
	return 0;
}
	
