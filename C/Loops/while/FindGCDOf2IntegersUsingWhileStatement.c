#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter 2 Numbers : ");
    scanf("%d%d",&x,&y);
    while (x!=y)
    {
        if (x>y)
        x-=y;
        else
        y-=x;
    }
    
    printf("The GCD Of The 2 Numbers Is : %d ",x,y);
    return 0;
}