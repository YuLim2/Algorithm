int sum(int n){		//�� ���� ���ϴ� �Լ� 
    printf("%d\n",n);	//5, 4, 3, 2, 1
    if(n<1) return 1;
    else return(n+sum(n-1));	//sum(n-1)�� ��� n�� 1�� ���� ���� ������ ����
}
