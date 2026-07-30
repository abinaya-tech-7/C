#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;
    int **q;
    ptr=&a;
    q=&ptr;
    printf("%d",**q);
    return 0;
}
