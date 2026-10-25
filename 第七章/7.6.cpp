#include<stdio.h>
int main()
{
    char ch;
    char prev_ch='\0';
    int ei=0;
    while((ch = getchar())!='#')
    {
        if(prev_ch=='e'&&ch=='i')
        ei++;
        prev_ch = ch;
    }
    printf("ei的个数是%d",ei);
    return 0;
}