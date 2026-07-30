#include <stdio.h>

enum day
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    enum day d;

    printf("Enter a number (1-7): ");
    scanf("%d", &d);

    switch(d)
    {
        case Monday:
            printf("Monday");
            break;
        case Tuesday:
            printf("Tuesday");
            break;
        case Wednesday:
            printf("Wednesday");
            break;
        case Thursday:
            printf("Thursday");
            break;
        case Friday:
            printf("Friday");
            break;
        case Saturday:
            printf("Saturday");
            break;
        case Sunday:
            printf("Sunday");
            break;
        default:
            printf("Invalid input");
    }

    return 0;
}
