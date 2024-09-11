#include <stdio.h>
int main ()
{
	int x,y,z;
	printf("Enter The Age Of x : ");
	scanf("%d",&x);
	printf("Enter The Age Of y : ");
	scanf("%d",&y);
	printf("Enter The Age Of z : ");
	scanf("%d",&z);
	if (x<y && x<z)
	        printf("x Is The Youngest");
	else
	if (y<x && y<z)
	        printf("y Is The Youngest");
	else
	        printf("z Is The Youngest");
	return 0;
}