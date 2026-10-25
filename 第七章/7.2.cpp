#include<stdio.h>
int main()
{
    char ch;
    int num = 0;
    while((ch = getchar())!='#')
    {
        printf("\t%c-%d ",ch,ch);
        num++;
        if(num%8==0)
        {
            printf("\n");
        }
    }
    return 0;
}