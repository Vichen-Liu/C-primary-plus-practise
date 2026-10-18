#include<stdio.h>
#define minute_to_hour 60
int main()
{
    int minute;
    int hour;
    printf("enter the minute:");
    scanf("%d",&minute);
    while (minute > 0)
    {
        hour = minute / minute_to_hour;
        minute = minute - hour * minute_to_hour;
        printf("%d:%d\n",hour,minute);
        printf("enter the minute:");
        scanf("%d", &minute);
    }
    return 0;
}