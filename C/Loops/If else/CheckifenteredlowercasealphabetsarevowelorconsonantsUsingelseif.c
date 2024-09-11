#include <stdio.h>
int main ()
{
    char in;
    printf("Enter Any Lower Case Alphabet : ");
    scanf("%c",&in);
    if (in=='a' || in=='e' ||in=='i' ||in=='o' ||in=='u')
    printf("%c Is A Vowel",in);
    else
    printf("%c Is A Consonant",in);
    return 0;
}