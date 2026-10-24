#include<stdio.h>
int main()
{
    const int Dunbar=150;
    int num=5;
    int n=1;
    while(num<Dunbar)
    {
        num-=n;
        num*=2;
        n++;
    }
    printf("用了%d周",n-1);
}