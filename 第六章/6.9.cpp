#include<stdio.h>
int main()
{
    double n,m;
    double res;
    printf("input two numbers a and b:");
    while(scanf("%lf %lf",&n,&m)==2)
    {
        if(n==0&&m==0)
        {
            break;
        }
        res=(n-m)/(n*m);
        printf("(%.3g - %.3g)/(%.3g*%.3g) = %.5g\n", n, m, n, m, res);
        printf("input two numbers a and b:");
    }
    return 0;
}