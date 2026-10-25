#include<stdio.h>
int main()
{
    char ch;
    int num_even = 0;
    int sum_even = 0;
    float average_even;
    int num_odd = 0;
    int sum_odd = 0;
    float average_odd;
    while((ch = getchar())!='0')
    {
        if(ch%2==0)
        {
            num_even++;
            sum_even += ch;
            average_even = sum_even/num_even;
        }
        else
        {
            num_odd++;
            sum_odd += ch;
            average_odd = sum_odd/num_odd;
        }
    }
    printf("偶数的个数是%d,平均值为%.2f,奇数的个数是%d,平均值为%.2f",num_even,average_even,num_odd,average_odd);
    return 0;
}