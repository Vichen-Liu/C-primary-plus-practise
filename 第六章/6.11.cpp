#include<stdio.h>
int main()
{
    const int SIZE=8;
    int num[SIZE];
    int new_num[SIZE];
    printf("Please enter %d integers.\n", SIZE);
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<SIZE;i++)
    {
        new_num[i]=num[SIZE-1-i];
    }
     for(int i=0;i<SIZE;i++)
    {
        printf("%d",new_num[i]);
    }
    return 0;
}
