//Without Using Intermidiate Variable//
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 Numbers : ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b; //b=a
    a=a-b; //a=b
    printf("After Swaping : %d,%d",a,b);
    return 0;
}