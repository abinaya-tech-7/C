#include <stdio.h>
#include <string.h>

int main()
{
    char parent[50], choice;
    char children[200];
    char *name;
    int count = 0;
    int parentCommission;

    scanf("%s", parent);
    scanf(" %c", &choice);

    if (choice == 'N')
    {
        printf("TOTAL MEMBERS:1\n");
        printf("COMISSION DETAILS\n");
        printf("%s: 250 INR\n", parent);
    }
    else if (choice == 'Y')
    {
        scanf(" %[^\n]", children);

        name = strtok(children, ",");

        while (name != NULL)
        {
            count++;
            name = strtok(NULL, ",");
        }

        parentCommission = count * 500;

        printf("TOTAL MEMBERS:%d\n", count + 1);
        printf("COMISSION DETAILS\n");
        printf("%s: %d INR\n", parent, parentCommission);

        name = strtok(children, ",");

        while (name != NULL)
        {
            printf("%s: 250 INR\n", name);
            name = strtok(NULL, ",");
        }
    }
    else
    {
        printf("INVALID INPUT");
    }

    return 0;
}
