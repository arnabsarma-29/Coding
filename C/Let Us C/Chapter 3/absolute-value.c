#include <stdio.h>
int main ()
{
	float x;
	printf("Enter A Number :");
	scanf("%f",&x);
	if (x>0)
	printf("Absolute Number Is : %.2f",x);
	else
	{
		x = x*(-1);
		printf("Absolute Number Is : %.2f",x);
	}
	return 0;
}