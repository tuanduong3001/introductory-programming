#include<stdio.h>
int main()
{
	int a, b;
	float x;
	printf("give me a ");
	scanf_s("%d", &a);
	printf("give me b ");
	scanf_s("%d", &b);
	if (a == 0)
	{
		if (b == 0)
			printf("phuong trinh vo so nghiem");
		else
			printf("phuong trinh vo nghiem");
	}
	else
		printf("phuong trinh co nghiem x la %.0f", x = (float)-b / a);
}