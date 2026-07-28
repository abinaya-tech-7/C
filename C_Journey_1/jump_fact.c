#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i=1,fact=1;
    printf("Enter n:");
    scanf("%d",&n);
    start:
        if(i<=n)
        {
            fact=fact*i;
            i++;
            goto start;
        }
    printf("Fact=%d",fact);
    return 0;
}
