#include <stdio.h>	
int main() {
   int n,m;
   int cnt = 0;	
   scanf("%d %d",&n,&m);	//n�� m �Է� 
   for(int i = 1; i <= n; i ++){	//1���� n���� �ݺ� 
      if(i%m==0)	//i���� m�� ������� Ȯ�� 
         cnt+=i;	//������ �߰� 
   }
   printf("%d",cnt);
   return 0;
}
