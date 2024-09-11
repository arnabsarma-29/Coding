#include <stdio.h>
int main ()
{
	int n,n_0,n_1,n_2,n_3,n_4,sum;
	printf("Enter A 5 Digit Number : ");
	scanf("%d",&n);
	n_0 = n%10;
	n = n/10;
	n_1 = n%10;
	n = n/10;
	n_2 = n%10;
	n = n/10;
	n_3 = n%10;
	n = n/10;
	n_4 = n%10;
	sum = n_0+n_1+n_2+n_3+n_4;
	printf("The Sum Of Its Digits Are : %d",sum);
	return 0;
}