#include<stdio.h>
int main()
{
    char fname[40];
    char lname[40];
    printf("enter your first name:");
    scanf("%s",fname);
    printf("enter your last name:");
    scanf("%s",lname);
    printf("your name is:%s %s",fname,lname);
    return 0;
}