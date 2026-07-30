#include<stdio.h>
int main()
{
    float b,h,area;
    printf("Enter breadth and height:");
    scanf("%f%f",&b,&h);
    area=0.5f*b*h;
    printf("Area of triangle%f:",area);
    return 0;
}
