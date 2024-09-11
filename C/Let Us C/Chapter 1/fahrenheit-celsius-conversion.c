#include <stdio.h>
int main ()
{
    float fah,cel;
    printf("Enter Temperature In Fahrenheit : ");
    scanf("%f",&fah);
    cel=(fah-32)*(5.0/9.0);
    printf("The Temperature In Celsius : %.2f",cel); //Here .2 was used to display 2 digits after decimal
    return 0;
}