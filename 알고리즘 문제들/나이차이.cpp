��������
#include <stdio.h>
int main() {
	int n, max=-1, min=1000, t;		//max�� -1, min�� 1000���� ���� 
	scanf("%d", &n);	//�� �� �Է¹޴��� 
	for(int i=0; i<n; i++) {
	scanf("%d", &t);	//�� ����ŭ ���� �Է� 
	if(max<t) max=t;	//max�� ���� ���ǿ� ���߾� ���� 
	if(min>t) min=t;	//min�̶� ���� ���ǿ� ���߾� ����
} printf("%d", max-min);
}
