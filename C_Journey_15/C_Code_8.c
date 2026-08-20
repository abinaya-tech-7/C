#include <stdio.h>
#include <ctype.h>

int main()
{
    char a[6], b[6], c[6];
    int i;

    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    /* Replace vowels in first word with % */
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' ||
           a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        {
            a[i] = '%';
        }
    }

    /* Replace consonants in second word with # */
    for(i = 0; b[i] != '\0'; i++)
    {
        if(! (b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u' ||
              b[i]=='A' || b[i]=='E' || b[i]=='I' || b[i]=='O' || b[i]=='U'))
        {
            b[i] = '#';
        }
    }

    /* Convert third word to uppercase */
    for(i = 0; c[i] != '\0'; i++)
    {
        c[i] = toupper(c[i]);
    }

    printf("%s%s%s", a, b, c);

    return 0;
}
