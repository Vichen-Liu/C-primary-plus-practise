#include<stdio.h>
int main()
{
    double hour;
    double gross;
    double net;
    double tax;
    const int basepay=10;
    const int basehour=40;
    const double rate1=0.15;
    const double rate2=0.2;
    const double rate3=0.25;
    printf("请输入一周工作小时数：");
    scanf("%lf",&hour);
    if(hour>40)
    {
        hour=40+(hour-40)*1.5;
    }
    gross=hour*basepay;
    if(gross<=300)
    {
        tax=gross*rate1;
    }
    else if(300<gross&&gross<=450)
    {
        tax=(gross-300)*rate2+300*rate1;
    }
    else
    {
        tax=(gross-450)*rate3+150*rate2+300*rate1;
    }
    net=gross-tax;
    printf("您的税前工资是%.2lf,您的税后工资是%.2lf,您的税额是%.2lf\n",gross,net,tax);
    return 0;
}