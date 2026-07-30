#include <stdio.h>

int main()
{
    int interior, exterior, i;
    float area, totalCost = 0;

    printf("Enter number of interior walls: ");
    scanf("%d", &interior);

    printf("Enter number of exterior walls: ");
    scanf("%d", &exterior);

    if(interior < 0 || exterior < 0)
    {
        printf("INVALID INPUT");
        return 0;
    }

    if(interior > 0)
    {
        printf("Enter surface area of each interior wall:\n");
        for(i = 0; i < interior; i++)
        {
            scanf("%f", &area);
            totalCost = totalCost + (area * 18);
        }
    }

    if(exterior > 0)
    {
        printf("Enter surface area of each exterior wall:\n");
        for(i = 0; i < exterior; i++)
        {
            scanf("%f", &area);
            totalCost = totalCost + (area * 12);
        }
    }

    printf("Total estimated Cost : %.1f INR", totalCost);

    return 0;
}
