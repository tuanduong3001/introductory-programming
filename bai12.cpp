#include<stdio.h>
int main()
{
	float a, b, c, d;
	float max;
	printf("give me a ");
	scanf_s("%f", &a);
	printf("give me b ");
	scanf_s("%f", &b);
	printf("give me c ");
	scanf_s("%f", &c);
	printf("give me d ");
	scanf_s("%f", &d);
	max = a;
	if (max < b) max = b;
	if (max < c)max = c;
	if (max < d)max = d;
	printf("show me max %.0f", max);
}