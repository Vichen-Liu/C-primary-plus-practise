#include<stdio.h>
int main()
{
    float inch=2.54;
    float hight;
    printf("Enter your hight in inches:");
    scanf("%f",&hight);
    printf("Your hight in centimeters is %f cm\n",hight*inch);
    return 0;
}