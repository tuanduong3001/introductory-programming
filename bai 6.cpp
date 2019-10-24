#include<stdio.h>
int main()
{
	int a, b, c;
	printf("so a la ");
	scanf_s("%d", &a);
	printf("so b la ");
	scanf_s("%d", &b);
	printf("so c la ");
	scanf_s("%d", &c);
	if ((a + b > c) && (a + c > b) && (b + c > a) && (a > 0) && (b > 0) && (c > 0))
	{
		printf("ba so a b c la ba canh cua mot tam giac ", a, b, c);
	}
	else
	{
		printf("ba so a b c khong la ba canh cua mot tam giac ", a, b, c);
	}
		

}