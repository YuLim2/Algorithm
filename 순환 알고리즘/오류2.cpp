int recursive(int n){	//종료 조건이 없어서 무한루프가 됨 -> 종료 조건 추가 
    printf("recursive(%d)\n",n);
    return n*recursive(n-1);
}
