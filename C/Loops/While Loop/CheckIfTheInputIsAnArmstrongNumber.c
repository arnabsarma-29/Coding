#include <stdio.h>
int main ()
{
    int n,c,ans=0,r,temp;
    printf("Enter A Number : ");
    scanf("%d",&ans);
    while (n>0)
    {
        r=n%10;
        c=r*r*r;
        ans = ans+c;
        n=n/10;
        n=temp;
    }
    if (n==ans)
    printf("The Entered Number Is An Armstrong Number");
    else
    printf("The Entered Number Is Not An Armstrong Number");
    return 0;
}