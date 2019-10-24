#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c;
	printf("give me a ");
	scanf_s("%f", &a);
	printf("give me b ");
	scanf_s("%f", &b);
	printf("give me c ");
	scanf_s("%f", &c);
	if ((a + b > c) && (a + c > b) && (b + c > a) && (a > 0) && (b > 0) && (c > 0))
	{
		printf("they are the edge of the triangle \n");
		if ((a == b) && (b == c) && (c == a))
			printf("this is equilateral triangle \n");
		else if ((a == b) || (a == c) || (c == b))
			printf("this is isosceles triangle \n");
		else if ((a * a + b * b == c * c) && (a == b) || (a * a + c * c == b * b) && (a == c) || (b * b + c * c == a * a) && (b == c))
			printf("this is triangle right angle \n");
		else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
			printf("this is right triangle \n");
		else
			printf("this is triangle \n");
	}
	else
		printf("this is not triangle \n");


	
}