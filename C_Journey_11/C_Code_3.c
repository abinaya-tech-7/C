#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, j, count = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for(i = 0; str2[i] != '\0'; i++)
    {
        int found = 0;

        for(j = 0; j < i; j++)
        {
            if(str2[i] == str2[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            for(j = 0; str1[j] != '\0'; j++)
            {
                if(str1[j] == str2[i])
                {
                    count++;
                }
            }
        }
    }

    printf("%d", count);

    return 0;
}
