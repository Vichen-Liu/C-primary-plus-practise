#include<stdio.h>
int main()
{
    int x=0;
    for(int i=0;i<6;i++)
    {
        x+=i;
        for(int j=0;j<=i;j++)
        {
            putchar('A'+j+x);
        }
        printf("\n");
    }
}