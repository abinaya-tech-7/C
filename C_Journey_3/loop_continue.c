#include<stdio.h>
int main()
{
    int i;
    for(i=2;i<=20;i=i+2)
    {
        if(i==18)
            continue;
            printf("%d\n",i);
    }
    return 0;
}
