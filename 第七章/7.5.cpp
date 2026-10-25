#include<stdio.h>
int main()
{
    char ch;
    int num = 0;
    while((ch = getchar())!='#')
    {
        switch(ch)
        {
            case '.':
                ch='!';
                num++;
                putchar(ch);
                break;
            case '!':
                num++;
                putchar(ch);
                putchar(ch);
                break;
            default:
                putchar(ch);
                break;
        }
    }
    printf("共进行了%d次转换",num);
    return 0;
}