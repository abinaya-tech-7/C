#include<stdio.h>
int main()
{
    char c;
    printf("Enter a letter:");
    scanf("%c",&c);
    switch(c)
    {
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
        printf("Vowel");
        break;
        default:
        printf("Consonant");
    }
    return 0;
}
