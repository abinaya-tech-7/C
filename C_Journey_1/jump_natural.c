#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    calculate:
        sum=sum+i;
        i++;
        if(i<=n)
            goto calculate;
        printf("sum=%d",sum);
    return 0;
}
