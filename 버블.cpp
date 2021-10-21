#include <stdio.h>
int main() {
	int i, j, n, temp, cmp, change=0;
	int list[10]= {};
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &list[i]);
	}
	
	for(i=n-1; i>0; i--){
		for(j=0; j<i; j++){
			if(list[j] < list[j+1]){
				temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
				change++;
			}
		}
	}
	for(i=n-1; i>=1; i--){
		cmp += i;
	}
	printf("%d %d", cmp, change);
	return 0;
}

