#include <stdio.h>
int main ()
{
    int n, r, per, fact1, fact2,number,i;
    scanf("%d",&n);  
    scanf("%d",&r);
    fact1 = n;  
    for (int i = n - 1; i >= 1; i--)  
    {  
        fact1 = fact1 * i;  
    }  
    number = n - r;  
    fact2 = number;  
    for (i = number - 1; i >= 1; i--)  
    {  
        fact2 = fact2 * i;  
    }  
    per = fact1 / fact2;  
    printf("Total possible arrangements: %d",per);  
return 0;
}