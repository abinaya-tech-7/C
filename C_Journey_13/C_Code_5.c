#include<stdio.h>
int* sort(int *, int);
int main()
{
    int a[] = {5,4,2,51,1};
    int size = sizeof(a)/sizeof(a[0]);
    int *result, i;
    result = sort(a,size);
    for(i=0;i<size;i++)
    {
        printf("%d ",*(result+i));
    }
    return 0;
}
int* sort(int *x, int size)
{
    int i, j, temp;
    for(i=0;i<size;i++)
    {
        for(j=i;j<size;j++)
        {
           if(x[i] > x[j])
           {
               temp = x[i];
               x[i] = x[j];
               x[j] = temp;
           }
        }
    }
    return x;
}
