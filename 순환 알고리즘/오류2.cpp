int recursive(int n){	//���� ������ ��� ���ѷ����� �� -> ���� ���� �߰� 
    printf("recursive(%d)\n",n);
    return n*recursive(n-1);
}
