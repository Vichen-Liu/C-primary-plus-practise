#include<stdio.h>
int num;
int main()
{
    printf("请输入一个正整数：");
    scanf("%d",&num);
    if(num>0)
    {
        for(int i=2;i<=num;i++)
        {
            int j;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    break;
                }
            }
            if(j==i)
            {
                printf("%d ",i);
            }
        }
    }
    return 0;
}