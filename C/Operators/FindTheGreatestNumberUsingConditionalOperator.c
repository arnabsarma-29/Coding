#include <stdio.h>
int main ()
{
    int gn,a,b,c;
    printf("Enter 3 Unequal Numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    gn = a>b ? (a>c ? a:c):(b>c ? b:c); // ? stands for true and : stands for or
    printf("The Greatest Number Is : %d",gn);
    return 0;
}