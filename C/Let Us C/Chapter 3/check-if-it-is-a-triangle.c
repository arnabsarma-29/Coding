#include <stdio.h>
int main ()
{
	int x,y,z,sum;
	printf("Enter The Angle Of x : ");
	scanf("%d",&x);
	printf("Enter The Angle Of y : ");
	scanf("%d",&y);
	printf("Enter The Angle Of z : ");
	scanf("%d",&z);
	sum = x+y+z;
	if (sum == 180 && x>0 && y>0 && z>0)
	        printf("Its A Triangle");
	else
	        printf("It's Not A Triangle");
		return 0;
}