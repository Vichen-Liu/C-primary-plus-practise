#include<stdio.h>
void Fahrenheit(float F);
int main()
{
    float F;
    printf("enter the Fahrenheit temperature:");
    scanf("%f",&F);
    Fahrenheit(F);
    return 0;
}

void Fahrenheit(float F)
{
    float temperature;
    float Kelvin;
    temperature=(F-32)/1.8;
    Kelvin=temperature+273.15;
    printf("the temperature is %f Celsius or %f Kelvin\n",temperature,Kelvin);
}