/*A0 has dimension 1189 mm x 841 mm
The length is halved for each successive iteration and is used as its breadth and the breadth of the previous is used as the length for the later
Example -> A1 would have dimensions 841 mm x 594 mm*/
#include <stdio.h>
int main ()
{
	int n,len,bre;
	n = 0;
	len = 1189;
	bre = 841;
	while (n < 9)
	{
		bre = len/2;
		len = bre;
		printf("A%d has dimensions as (in mm) : %d x %d\n",n,len,bre);
		n++;
	}
	return 0;
}