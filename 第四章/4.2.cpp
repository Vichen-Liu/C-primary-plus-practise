#include<stdio.h>
int main()
{
    char name[]="Vichen Liu";
    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    printf("\"   %s   \"",name);
    return 0;
}