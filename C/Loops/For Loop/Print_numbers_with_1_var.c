
#include <stdio.h>
int main () 
{
    int i, num;

    printf("Enter The Frequency: ");
    scanf("%d", &num);

    printf("Enter The First Value: ");
    scanf("%d", &i);

    for (; i < num; i++) {
        printf("%d ", i);
    }

    return 0;
}