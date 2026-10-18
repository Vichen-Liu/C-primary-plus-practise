#include<stdio.h>
int main()
{
    int count,sum,num;
    count=0;
    sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(count++<num)
    {
        sum+=count;
    }
    printf("the sum is %d\n",sum);
    return 0;
}