#include <stdio.h>	
int main() {
   int n,m;
   int cnt = 0;	
   scanf("%d %d",&n,&m);	//n과 m 입력 
   for(int i = 1; i <= n; i ++){	//1부터 n까지 반복 
      if(i%m==0)	//i마다 m의 배수인지 확인 
         cnt+=i;	//맞으면 추가 
   }
   printf("%d",cnt);
   return 0;
}
