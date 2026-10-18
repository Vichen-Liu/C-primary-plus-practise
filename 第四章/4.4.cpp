#include<stdio.h>
int main()
{
    float height;
    char name[40];
    printf("enter your height in feet and name:");
    scanf("%f %s",&height,name);
    printf("%s,you are %f feet tall.",name,height);
    return 0;
}