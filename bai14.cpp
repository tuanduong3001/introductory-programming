#include<stdio.h>
int main()
{
	int a, b, c;
	int max;
	int min;
	int min2;
	printf("give me a ");
	scanf_s("%d", &a);
	printf("give me b ");
	scanf_s("%d", &b);
	printf("give me c ");
	scanf_s("%d", &c);
	max = a;
	if (max < b) max = b;
	if (max < c)max = c;
	min = a;
	if (min > b)min = b;
	if (min > c)min = c;
	min2 = (a + b + c) - max - min;
	printf("so nho nhi la %d",min2);
}