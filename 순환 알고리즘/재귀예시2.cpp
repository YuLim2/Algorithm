int recursive(int n){
    printf("%d\n",n);	//5, 4, 3, 2, 1, 0
    if(n<1) return -1;
    else return(recursive(n-3)+1);		//��ȯ���� 2�� ���� 1�� ���ؼ� �ٽ� ��ȯ�ϴ� �Լ� 
}
