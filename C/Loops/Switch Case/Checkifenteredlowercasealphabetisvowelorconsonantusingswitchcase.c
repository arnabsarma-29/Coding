#include <stdio.h>
int main ()
{
    char in;
    printf("Enter Any Lower Case Alphabet : ");
    scanf("%c",&in);
    switch (in)
    {
        case 'a':
        printf("%c Is A Vowel",in);
        break;
        case 'e':
        printf("%c Is A Vowel",in);
        break;
        case 'i':
        printf("%c Is A Vowel",in);
        break;
        case 'o':
        printf("%c Is A Vowel",in);
        break;
        case 'u':
        printf("%c Is A Vowel",in);
        break;
        default:
        printf("%c Is A Consonant",in);
    }
    return 0;
}