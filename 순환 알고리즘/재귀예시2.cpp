int recursive(int n){
    printf("%d\n",n);	//5, 4, 3, 2, 1, 0
    if(n<1) return -1;
    else return(recursive(n-3)+1);		//반환갑에 2를 빼고 1을 더해서 다시 반환하는 함수 
}
