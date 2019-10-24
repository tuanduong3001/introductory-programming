#include<stdio.h>
int main()
{
	int a, b;
	int max;
	printf("give me a ");
	scanf_s("%d", &a);
	printf("give me b ");
	scanf_s("%d", &b);
	max = a;
	if (max < b) max = b;
	else max = a;
	printf("show me max %d", max);


}