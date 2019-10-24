#include<stdio.h>
int main()
{
	int year;
	printf("give me year ");
	scanf_s("%d", &year);
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		printf("this is leap year %d", year);
	}
	else
	{
		printf("this is not leap year %d", year);
	}
}