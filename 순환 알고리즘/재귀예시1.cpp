int recursive(int n){
    printf("%d\n",n);	//5, 4, 3, 2, 1, 0
    if(n<1) return 2;
    else return(2*recursive(n-1)+1);	//��ȯ���� 2�� ���ϰ� 1�� ���ϴ� �Լ� 
}
