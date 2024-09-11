#include <stdio.h>
int main ()
{
	int num,reverse=0,remainder,temp;
	printf("Enter A 5 Digit Number : ");
	scanf("%d",&num);
	temp = num;
	while (num > 0)
	{
		remainder = num % 10;
		reverse = reverse * 10 + remainder;
		num /= 10;
	}
	printf("Reversed Number Is : %d\n",reverse);
	if (reverse == temp)
	        printf("Reversed Number Is Same As The Input\n");
	else
	        printf("Reversed Number Is Not Same");
	return 0;
}