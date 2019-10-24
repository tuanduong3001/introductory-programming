#include<stdio.h>
int main()
{
	int h, m, s;
	printf("give me hour ");
	scanf_s("%d", &h);
	printf("give me minutes ");
	scanf_s("%d", &m);
	printf("give me seconds ");
	scanf_s("%d", &s);
	if (s == 59)
	{
		if (m == 59)
		{
			if (h == 23)
				printf("Gio sau do 1 giay la 00:00:00");
			else
				printf("Gio sau do 1 giay la %d:%d:%d", h + 1, 0, 0);
		}
		else
			printf("Gio sau do 1 giay la %d:%d:%d", h, m + 1, 0);
	}
	else
		printf("Gio sau do 1 giay la %d:%d:%d", h, m, s + 1);
}
