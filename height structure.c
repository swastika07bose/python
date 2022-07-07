#include <stdio.h>
void read();
struct height
{
    int ft;
    float inch;
}h1,h2,sum,sub;

void main()
{
    read();
    sum.ft=h1.ft+h2.ft;
    sum.inch=h1.inch+h2.inch;
    sub.ft=h1.ft-h2.ft;
    sub.inch=h1.inch-h2.inch;

    while (sum.inch>=12.0)
    {
        sum.inch-=12.0;
        ++sum.ft;
    }
    printf("\nSum of 2 heights is: %d\'-%.1f'", sum.ft, sum.inch);

    while (sub.inch>=12.0)
    {
        sub.inch-=12.0;
        ++sub.ft;
    }
    printf("\nDifference of 2 heights is: %d\'-%.1f'", sub.ft, sub.inch);
}

void read()
{
    printf("Enter first height in feet and inch ");
    scanf("%d%f",&h1.ft, &h1.inch);
    printf("Enter second height in feet and inch ");
    scanf("%d%f",&h2.ft, &h2.inch);
    return;
} 