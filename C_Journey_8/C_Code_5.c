#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    n=(n%5==0 && n%7==0)?printf("Divisible by 7&5"):(n%5==0)?printf("Divisible by 5"):(n%7==0)?printf("Divisible by 7"):printf("None");
    return 0;
}
