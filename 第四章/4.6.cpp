#include<stdio.h>
#include<string.h>
int main()
{
    char fname[40];
    char lname[40];
    int first;
    int last;
    printf("enter your first name:");
    scanf("%s",fname);
    printf("enter your last name:");
    scanf("%s",lname);
    printf("%s %s\n",fname,lname);
    first=strlen(fname);
    last=strlen(lname);
    printf("%*d %*d\n",first,first,last,last);
    printf("%s %s\n",fname,lname);
    printf("%d %*d\n",first,first,last);
    return 0;
}