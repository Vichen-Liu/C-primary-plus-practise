#include<stdio.h>
int main()
{
    char ch;
    int num = 0;
    while((ch = getchar())!='#')
    {
        if(ch=='.')
        {
            ch='!';
            num++;
            putchar(ch);
        }
        else if(ch=='!')
        {
            num++;
            putchar(ch);
            putchar(ch);
        }
        else
        {
            putchar(ch);
        }
    }
    printf("共进行了%d次转换",num);
    return 0;
}