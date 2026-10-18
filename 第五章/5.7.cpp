#include<stdio.h>
int main()
{
    int cubic(int num);
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("the cubic is %d\n",cubic(num));
}

int cubic(int num)
{
    return num*num*num;
}