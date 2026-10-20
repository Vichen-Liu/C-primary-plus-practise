#include<stdio.h>
int main()
{
    char lcase[25];
    int i;
    for(i=0;i<26;i++)
    {
        lcase[i]='a'+i;
    }
    for(i=0;i<26;i++)
    {
        printf("%c",lcase[i]);
    }
    return 0;
}