#include<stdio.h>
int main(){
	char a[100];
	int res=0, cnt=0, i;
	scanf("%s", &a);	//�迭�� �ޱ� 
	for(i=0; a[i]!='\0'; i++){	//�迭�� ������ 
		if(a[i]>=48 && a[i]<=57){	//�ƽ�Ű�ڵ�� �������� �������� Ȯ�� 
			res=res*10+(a[i]-48);	//�ڸ� �о��ְ� ���ڷ� ���� ���� ������ ��ȯ�ؼ� �ջ� 
		}
	}
	printf("%d\n", res);
	for(i=1; i<=res; i++){	//���� �� ���� 
		if(res%i==0) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
