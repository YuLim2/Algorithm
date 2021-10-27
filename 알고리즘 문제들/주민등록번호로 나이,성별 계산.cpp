#include<stdio.h>
int main(){
	char a[20];
	int year, age;
	scanf("%s", &a);	//주민등록번호를 배열로 입력받기 
	if(a[7]=='1' || a[7]=='2')	//배열의 인덱스로 판단 
		year=1900+((a[0]-48)*10+(a[1]-48)); 	//태어난 때 확인 
	else
		year=2000+((a[0]-48)*10+(a[1]-48));
	age=2019-year+1;	//나이 구하기 
	printf("%d ", age);
	if(a[7]=='1' || a[7]=='3') printf("M\n");	//성별 구하기 
	else printf("W\n");
	return 0;
}
