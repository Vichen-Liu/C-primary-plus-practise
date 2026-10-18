#include<stdio.h>
int main()
{
    int age;
    float second=3.156e7;
    float age_second;
    printf("enter your age:");
    scanf("%d",&age);
    age_second=age*second;
    printf("your age in second is %f",age_second);
    return 0;
}