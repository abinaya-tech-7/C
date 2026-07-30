#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%11==0 && n%32==0)
    {
        printf("It is a multiple of 11 and 32");
    }
    else{
        printf("It is not a multiple of 11 and 32");
    }
    return 0;
}
