#include <stdio.h>
int main ()
{
    float pi=3.14,rad,area,circum;
    printf("Enter The Radius : ");
    scanf("%f",&rad);
    area=pi*rad*rad;
    printf("The Area Of The Circle : %f ",area);
    circum=2*pi*rad;
    printf("The Perimeter Of The Circle : %f ",circum);
    return 0;
}