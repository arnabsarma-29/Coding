#include <stdio.h>
int main ()
{
	int i, num;
	printf("Enter the frequency: ");
	scanf("%d",&num);
	i=0;
	while (i<num)
	{
		i = i+1;
		printf("%d\n",i);
	}
	return 0;
}