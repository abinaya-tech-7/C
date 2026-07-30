#include <stdio.h>

int main()
{
    int T, i;

    printf("Enter number of hours: ");
    scanf("%d", &T);

    int E[T], L[T];

    printf("Enter guests entering:\n");
    for(i = 0; i < T; i++)
    {
        scanf("%d", &E[i]);
    }

    printf("Enter guests leaving:\n");
    for(i = 0; i < T; i++)
    {
        scanf("%d", &L[i]);
    }

    int guests = 0, maxGuests = 0;

    for(i = 0; i < T; i++)
    {
        guests = guests + E[i] - L[i];

        if(guests > maxGuests)
        {
            maxGuests = guests;
        }
    }

    printf("%d\n", maxGuests);

    return 0;
}
