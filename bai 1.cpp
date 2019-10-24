#include<stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	printf("gia tri cua a la ");
	scanf_s("%d", &a);
	a = abs(a);
	printf("gia tri tuyet doi cua a la %d",a);
}