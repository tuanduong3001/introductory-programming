#include<stdio.h>
int main()
{
	int a, b;
	float result;
	printf("give me a ");
	scanf_s("%d", &a);
	printf("give me b ");
	scanf_s("%d", &b);
	if (b == 0)
	{
		printf("khong chia duoc \n");
	}
	else 
	{
		printf("thuong la %.2f", result = (float)a / b);
	}
}
