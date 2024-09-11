#include <stdio.h>
int main ()
{
    float x,y;
    printf("Enter Temperature In Fahrenhiet : ");
    scanf("%f",&x);
    y=(x-32)*5/9;
    printf("The Temperature In Celcius : %.2f",y);
    return 0;
}