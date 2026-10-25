#include<stdio.h>
int main()
{
    char ch;
    int sp_ct = 0;  
    int nl_ct = 0;  
    int other = 0;
    while((ch = getchar())!='#')
    {
        if(ch==' ')
        {
            sp_ct++;
        }
        else if(ch=='\n')
        {
            nl_ct++;
        }
        else
        {
            other++;
        }
    }
    printf("有%d个空格，%d个换行符，%d个其他字符",sp_ct,nl_ct,other);
    return 0;
}