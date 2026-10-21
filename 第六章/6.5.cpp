#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        int num=(8-2*i)/2;
        for(int j=0;j<num;j++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            putchar('A'+j);
        }
        for(int j=i-1;j>=0;j--)
        {
            putchar('A'+j);
        }
        for(int j=0;j<num;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}