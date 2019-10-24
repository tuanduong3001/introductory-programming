#include<stdio.h>
int main()
{
	int a, b, c;
	printf("nhap gio ");
	scanf_s("%d", &a);
	printf("nhap phut ");
	scanf_s("%d", &b);
	printf("nhap giay ");
	scanf_s("%d", &c);
	if ((a >= 0 && a <= 23) && (b >= 0 && b <= 59) && (c >= 0 && c <= 59))
	{
		printf("thoi gian hop le la %d gio %d phut %d giay ",a,b,c);
	}
	else 
	{
		printf("bo ba so gio %d phut %d giay %d khong hop le ",a,b,c);
	}
}