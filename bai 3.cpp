#include<stdio.h>
#include<math.h>
int main()
{
	float length, width;
	float periMeter;
	printf("give me length ",&length);
	scanf_s("%f", &length);
	printf("give me width ",&width);
	scanf_s("%f", &width);
	periMeter = (length + width) * 2;
	printf("show periMeter %.2f",periMeter);

}