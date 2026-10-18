#include<stdio.h>
int main()
{
    int foperand;
    int soperand;
    int result;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&soperand);
    printf("Now enter the first operand:");
    scanf("%d",&foperand);
    result=foperand%soperand;
    printf("%d %% %d is %d\n",foperand,soperand,result);
    do
    {
        printf("Enter next number for first operand:");
        scanf("%d",&foperand);
        if (foperand>0)
        {
            result=foperand%soperand;
            printf("%d %% %d is %d\n",foperand,soperand,result);
        }
    }while(foperand>0);
    printf("done");
    return 0;
}