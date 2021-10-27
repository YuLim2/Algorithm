int sum(int n){		//총 합을 구하는 함수 
    printf("%d\n",n);	//5, 4, 3, 2, 1
    if(n<1) return 1;
    else return(n+sum(n-1));	//sum(n-1)을 계속 n이 1이 되지 않을 때까지 로출
}
