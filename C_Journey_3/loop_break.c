#include<stdio.h>
int main()
{
    int i;
    for(i=2;i<=10;i=i+2)
    {
        if(i==8)
            break;
            printf("%d\n",i);
    }
    return 0;
}
