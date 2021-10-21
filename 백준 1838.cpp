#include<stdio.h>
int main(){
    int i, j, n=4, k, temp;
    int l[4] = {1,8,9,4};
    for(i=0; i<n-1; i++){
    	k=i;
    	for(j=i+1; j<n; j++){
    		if(l[k] > l[j]){
    			k=j;
			}
		}
		temp = l[i];
    	l[i] = l[k];
    	l[k] = temp;
    	}
    for(i=0; i<n; i++){
        printf("%d ", l[i]);
    }
}
