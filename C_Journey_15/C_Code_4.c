#include <stdio.h>

int main()
{
    char mainMenu;
    int subMenu;

    printf("Enter main menu (c/t/s/b): ");
    scanf(" %c", &mainMenu);

    printf("Enter sub menu number: ");
    scanf("%d", &subMenu);

    switch(mainMenu)
    {
        case 'c':
            switch(subMenu)
            {
                case 1:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Espresso Coffee!");
                    break;

                case 2:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Cappuccino Coffee!");
                    break;


                case 3:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Latte Coffee!");
                    break;

                default:
                    printf("INVALID INPUT");
            }
            break;

        case 't':
            switch(subMenu)
            {
                case 1:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Plain Tea!");
                    break;

                case 2:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Assam Tea!");
                    break;

                case 3:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Ginger Tea!");
                    break;

                case 4:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Cardamom Tea!");
                    break;

                case 5:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Masala Tea!");
                    break;

                case 6:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Lemon Tea!");
                    break;

                case 7:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Green Tea!");
                    break;

                case 8:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Organic Darjeeling Tea!");
                    break;

                default:
                    printf("INVALID INPUT");
            }
            break;

        case 's':
            switch(subMenu)
            {
                case 1:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Hot and Sour Soup!");
                    break;

                case 2:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Veg Corn Soup!");
                    break;

                case 3:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Tomato Soup!");
                    break;

                case 4:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Spicy Tomato Soup!");
                    break;

                default:
                    printf("INVALID INPUT");
            }
            break;

        case 'b':
            switch(subMenu)
            {
                case 1:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Hot Chocolate Drink!");
                    break;

                case 2:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Badam Drink!");
                    break;

                case 3:
                    printf("Welcome to CCD!\n");
                    printf("Enjoy your Badam-Pista Drink!");
                    break;

                default:
                    printf("INVALID INPUT");
            }
            break;

        default:
            printf("INVALID INPUT");
    }

    return 0;
}
