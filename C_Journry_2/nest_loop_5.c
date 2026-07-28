#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number");
    scanf("%d,&n");
    for(i=1;i<=n;i++)
    {
        if(i==1||n==5)
        {
            for(j=1;j<=i;j++)
            {
                printf("#");
            }
            printf("\n");
        }
        else
        {
            printf("#");
        }
        for(j=2;j<=i;j++)
        {
            printf("#");

        }
        printf("\n");
    }
    return 0;
}
