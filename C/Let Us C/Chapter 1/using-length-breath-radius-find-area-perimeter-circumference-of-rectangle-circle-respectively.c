#define PI 3.14
#include <stdio.h>
int main ()
{
	float len,bre,rad,area_1,peri,circum,area_2;
	printf("Enter the length of the rectangle (in cm) : ");
	scanf("%f",&len);
	printf("Enter the breadth of the rectangle (in cm) : ");
	scanf("%f",&bre);
	printf("Enter the radius of the circle (in cm) : ");
	scanf("%f",&rad);
	area_1=len*bre;
	peri=2*(len+bre);
	area_2=PI*rad*rad;
	circum=2*PI*rad;
	printf("The Area Of The Rectangle Is : %.2fcm³\n",area_1);
	printf("The Perimeter Of The Rectangle Is : %.2fcm²\n",peri);
	printf("The Area Of The Circle Is : %.2fcm³\n",area_2);
	printf("The Circumference Of The Circle Is : %.2fcm²",circum);
	return 0;
}