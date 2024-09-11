#include <stdio.h>
int main ()
{
	int x,y;
	printf("Enter The Value Of x : ");
	scanf("%d",&x);
	printf("Enter The Value Of y : ");
	scanf("%d",&y);
	x = x+y;
	y = x-y;
	x = x-y;
	printf("After The Exchange : x = %d & y = %d",x,y);
	return 0;
}