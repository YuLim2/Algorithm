int recursive(int n){
    if(n==1) return 0;
    return n*recursive(n);	//���� ���������� n�� ���� ��ȭ�� �ش� 
}
