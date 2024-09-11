//To convert from Cartesian Coordinates (x,y) to Polar Coordinates (r,θ): r = √ ( x2 + y2 ) θ = tan-1 ( y / x )
#define PI 3.14
#include <stdio.h>
#include <math.h>
int main ()
{
	float r,Θ,x,y,angle,tan_Θ;
	printf("Enter The Value Of x : ");
	scanf("%f",&x);
	printf("Enter The Value Of y : ");
	scanf("%f",&y);
	r = sqrt(pow(x,2)+pow(y,2));
	Θ = atan(y/x); // atan is used to find inverse of tan
	angle = Θ*180/PI; //after using a tan we need to use this formulae to get angle
	printf("The Polar Coordinates Is : (%.2f,%.2f°)",r,angle);
	return 0;
}