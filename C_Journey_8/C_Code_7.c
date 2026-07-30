#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>=100 && n<=999)
    {
        printf("It is a 3 digit number");
    }
    else{
        printf("Not a three digit number");
    }
    return 0;
}
