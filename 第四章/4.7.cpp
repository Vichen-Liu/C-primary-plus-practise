#include<stdio.h>
#include<float.h>
int main()
{
    double a=1.0/3.0;
    float b=1.0/3.0;
    printf("%.6f\n",a);
    printf("%.6f\n",b);
    printf("%.12f\n",a);
    printf("%.12f\n",b);
    printf("%.18f\n",a);
    printf("%.18f\n",b);
    printf("FLT_DIG=%d\n",FLT_DIG);
    printf("DBL_DIG=%d\n",DBL_DIG);
    return 0;
}