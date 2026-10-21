#include<stdio.h>

int main()
{
    int lower,upper;
    int square,cube;
    printf("input the lower:");
    scanf("%d",&lower);
    printf("input the upper:");
    scanf("%d",&upper);
    for(int i=lower;i<=upper;i++)
    {
        square=i*i;
        cube=i*i*i;
        printf("%d %d %d\n",i,square,cube);
    }
    return 0;
}