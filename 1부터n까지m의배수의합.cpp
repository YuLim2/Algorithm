#include <stdio.h>
int main() {
   int n,m;
   int cnt = 0;
   scanf("%d %d",&n,&m);
   for(int i = 1; i <= n; i ++){
      if(i%m==0)
         cnt+=i;
   }
   printf("%d",cnt);
   return 0;
}
