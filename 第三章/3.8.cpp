#include<stdio.h>
int main()
{
    float pint;
    float ounce;
    float large_tablespoon;
    float teaspoon;
    float cup;
    printf("enter the cup:");
    scanf("%f",&cup);
    printf("%f cups=\n",cup);
    printf("%f pint\n",cup/2);
    printf("%f ounce\n",cup*8);
    printf("%f large_tablespoon\n",cup*16);
    printf("%f teaspoon\n",cup*32);
    return 0;
}