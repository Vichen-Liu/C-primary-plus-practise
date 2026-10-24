#include<stdio.h>
int main()
{
    double a[8];
    double b[8];
    printf("input the first number:");
    scanf("%lf",&a[0]);
    for(int i=1;i<8;i++)
    {
        printf("input the next number:");
        scanf("%lf",&a[i]);
    }
    double result=a[0];
    for(int i=0;i<8;i++)
    {
        b[i]=result;
        result+=a[i+1];
    }
    for(int i=0;i<8;i++)
    {
        printf("%lf\n",a[i]);
    }
    for(int i=0;i<8;i++)
    {
        printf("%lf\n",b[i]);
    }
    return 0;
}