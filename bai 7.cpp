#include<stdio.h>
#include<math.h>
int main()
{
	float a;
	printf("nhap a ");
	scanf_s("%f", &a);
	a = floor(a);
	printf("ket qua la: %.0f", a);
}
