#include<stdio.h>
int main()
{
    int n,i,j,a;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=0;i<=n;i++);
    {
        for(j=0;j<=a;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
