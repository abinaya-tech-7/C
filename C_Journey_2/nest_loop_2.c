#include<stdio.h>
int main()
{
    int n,i,k,j;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)

    {
        for(k=i;k<n;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
        printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}
