#include<stdio.h>
int main()
{
    double count=1000000;
    int n=0;
    while(count>0)
    {
        count*=1.08;
        count-=100000;
        n++;
    }
    printf("%d年后用完",n-1);
}