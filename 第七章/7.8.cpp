#include<stdio.h>
int main()
{
    double hour;
    double gross;
    double net;
    double tax;
    double basepay;
    int choice;
    int flag=1;
    const int basehour=40;
    const double rate1=0.15;
    const double rate2=0.2;
    const double rate3=0.25;
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or hours:\n");
    printf("1)$8.75/hr                            2)$9.33/hr\n");
    printf("3)$10.00/hr                           4)$11.20/hr\n");
    printf("5)quit\n");
    printf("*****************************************************************\n");
    while(flag)
    {
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                basepay=8.75;
                flag=0;
                break;
            case 2:
                basepay=9.33;
                flag=0;
                break;
            case 3:
                basepay=10;
                flag=0;
                break;
            case 4:
                basepay=11.2;
                flag=0;
                break;
            case 5:
               return 0;
            default:
                printf("请输入正确的选择\n");
                break;
        }
    }
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