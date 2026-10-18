#include<stdio.h>
int main()
{
    int day;
    int week;
    int new_day;
    printf("enter the day:");
    scanf("%d",&day);
    while (day>0)
    {
        week=day/7;
        new_day=day%7;
        printf("%d days are %d weeks,%d days\n",day,week,new_day);
        printf("enter the day:");
        scanf("%d",&day);
    }
}