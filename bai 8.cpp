#include<stdio.h>
int main()
{
	int a, b, c;
	int min;
	printf("give me a ");
	scanf_s("%d", &a);
	printf("give me b ");
	scanf_s("%d", &b);
	printf("give me c ");
	scanf_s("%d", &c);
	min = a;
	if (min > b) min = b;
    if (min > c) min = c;
    printf("show me min %d", min);

	



}