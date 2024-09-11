#include <stdio.h>
int main ()
{
    int x,y,z;
    printf("Input 3 Unequal Numbers : ");
    scanf("%d%d%d",&x,&y,&z);
    if (x>y&&x>z)
    printf("%d Is The Greatest Number",x);
    else if (y>x&&y>z)
    printf("%d Is the Greatest Number",y);
    else
    printf("%d Is the Greatest Number",z);
    return 0;
}