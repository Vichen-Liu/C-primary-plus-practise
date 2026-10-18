#include<stdio.h>
int main()
{
    int height;
    float foot;
    float inch;
    printf("enter your herght in centimeters:");
    scanf("%d",&height);
    while (height>0)
    {
        foot=height/30.48;
        inch=height/2.54;
        printf("%d cm= %f feet, %f inches\n",height,foot,inch);
        printf("enter your herght in centimeters:");
        scanf("%d",&height);
    }
    printf("bye");
    return 0;
}