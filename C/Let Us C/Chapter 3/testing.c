#define PI 3.14
#include <stdio.h>
#include <math.h>
int main ()
{
	float x,x_0,r,x_1,y,sum,Θ,angle;
	printf("enter x Value : ");
	scanf("%f",&x);
	printf("Enter y Value : ");
	scanf("%f",&y);
	r=y/x;
	Θ = atan(r);
	angle = Θ*180/PI;
	printf("tan inverse is : %f",angle);
	return 0;
}