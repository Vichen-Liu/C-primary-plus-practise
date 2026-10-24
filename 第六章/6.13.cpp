#include<stdio.h>
int main()
{
    int num[8];
    int a=2;
    int i=0;
    for(i=0;i<8;i++)
    {
        num[i]=a;
        a*=2;
    }
    i=0;
    do
    {
        printf("%d\n",num[i]);
        i++;
    }while(i<8);
    return 0;
}