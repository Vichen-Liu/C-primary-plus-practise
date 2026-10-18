#include<stdio.h>
int main()
{
    float mile;
    float consume;
    float liter;
    float hundred_kilometer;
    const float gallon=3.785;
    const float one_mile=1.609;
    printf("enter the distance in miles:");
    scanf("%f",&mile);
    printf("enter the fuel consumption in gallons:");
    scanf("%f",&consume);
    printf("your average mileage is %f miles per gallon.\n",mile/consume);
    liter=consume*gallon;
    hundred_kilometer=mile*one_mile*100;
    printf("your average mileage is %f liter per hundred miles.\n",liter/hundred_kilometer);
    return 0;
}