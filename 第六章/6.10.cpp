#include<stdio.h>
int main()
{
    while(1)
    {
        printf("Enter lower and upper integer limits:");
        int lower,upper;
        int sum=0;
        scanf("%d %d",&lower,&upper);
        if(lower<0||upper<=lower)
        {
            printf("done");
            break;
        }
        for(int i=lower;i<=upper;i++)
        {
            int square=i*i;
            sum+=square;
        }
        printf("The sum of the square from %d to %d is: %d\n",lower,upper,sum);
    }
    return 0;
}