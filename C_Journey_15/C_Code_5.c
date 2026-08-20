#include <stdio.h>

int main()
{
    int age, count = 0, income = 0;

    printf("Enter age value (press Enter without a value to stop):\n");

    while (count < 20)
    {
        if (scanf("%d", &age) != 1)
            break;

        if (age <= 0 || age > 120)
        {
            printf("INVALID INPUT");
            return 0;
        }

        if (age < 17)
            income += 200;
        else if (age <= 40)
            income += 400;
        else
            income += 300;

        count++;
    }

    printf("Total Income %d INR", income);

    return 0;
}
