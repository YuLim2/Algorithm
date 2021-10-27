int recursive(int n){
    if(n==1) return 0;
    return n*recursive(n);	//무한 루프임으로 n의 값에 변화를 준다 
}
