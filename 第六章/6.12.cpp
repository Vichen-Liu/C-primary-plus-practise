#include<stdio.h>
int main()
{
    int num;
    float sum=0;
    float result1=0;
    float result2=0;
    printf("input a number:");
    scanf("%d",&num);
    if(num>0)
    {
        for(int i=1;i<=num;i++)
        {
            result1+=1.0/i;
            if(i%2==0)
            {
                result2-=1.0/i;
            }
            else
            {
                result2+=1.0/i;
            }
        }
        sum=result1+result2;
        printf("%f",sum);
    }
    return 0;
}