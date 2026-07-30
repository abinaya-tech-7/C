#include<stdio.h>
int main()
{
    int a=2,b=3,c=4;
    switch(a>b&&a>c)
    {
    case 1:
        printf("%d is greater");
        break;
    default:
        printf("%d is greater",b>c?b:c);
    }
    return 0;
}
