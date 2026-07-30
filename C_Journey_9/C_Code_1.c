#include<stdio.h>
int main()
{
    int a;
    int *ptr;
    a=10;
    ptr=&a;
    printf("%d\n",a);
    printf("%d",&ptr);
    return 0;
}
