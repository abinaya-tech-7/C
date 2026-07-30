#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    d = a>b&&a>c?a:((b>c)?b:c);
    printf("Greatest number:%d",d);
    return 0;
}
