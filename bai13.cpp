#include<stdio.h>
int main()
{
	int month, year;
	printf("give me month ");
	scanf_s("%d", &month);
	printf("give me year ");
	scanf_s("%d", &year);
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:printf("thang co 31 ngay \n"); break;
	case 4:
	case 6:
	case 9:
	case 11:printf("thang co 30 ngay \n"); break;
	case 2:
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
			printf("thang 2 co 29 ngay");
		else
			printf("thang hai co 28 ngay");
		break;
	}
	

}