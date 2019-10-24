#include<stdio.h>
int main()
{
	char a;
	printf("random character ");
	scanf_s("%c", &a);
	if (a >= 'A' && a<= 'Z')
		printf("character is %c", a + 32);
	else if (a >= 'a' && a <='z')
		printf("character is %c", a - 32);
}