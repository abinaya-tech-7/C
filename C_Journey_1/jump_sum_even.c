#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i=2,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    start:
        if(i<=n)
        {
            sum=sum+i;
            i=i+2;
            goto start;
        }
        printf("sum=%d",sum);
}
