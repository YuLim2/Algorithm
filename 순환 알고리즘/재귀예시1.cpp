int recursive(int n){
    printf("%d\n",n);	//5, 4, 3, 2, 1, 0
    if(n<1) return 2;
    else return(2*recursive(n-1)+1);	//반환갑에 2를 갑하고 1을 더하는 함수 
}
