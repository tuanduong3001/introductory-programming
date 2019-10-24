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
	float delta = b * b - 4 * a * c;
	if (a == 0) {
		if (b == 0) {
			if (c == 0)
				printf("phuong trinh vo so nghiem !");
			else
				printf("phuong trinh vo nghiem !");
		}
		else
			printf("phuong trinh co nghiem duy nhat la %f", -c / b);
	}
	else
	{
		if (delta < 0)
			printf("phuong trinh vo nghiem !");
		else if (delta == 0)
			printf("phuong trinh co nghiem kep la %f", -b / (2 * a));
		else (delta > 0);
		    printf("phuong trinh co 2 nghiem phan biet la %f,%f", (-b - sqrt(delta)) / (2 * a), (-b + sqrt(delta)) / (2 * a));

	}
	
}


