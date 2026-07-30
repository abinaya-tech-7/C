#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    int key, i;

    printf("Enter your PlainText: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the Key: ");
    scanf("%d", &key);

    if(key < 0)
    {
        printf("INVALID INPUT");
        return 0;
    }

    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = ((text[i] - 'A' + key) % 26) + 'A';
        }
        else if(text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = ((text[i] - 'a' + key) % 26) + 'a';
        }
        else if(text[i] >= '0' && text[i] <= '9')
        {
            text[i] = ((text[i] - '0' + key) % 10) + '0';
        }
    }

    printf("The encrypted Text is: %s", text);

    return 0;
}
