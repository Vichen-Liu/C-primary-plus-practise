#include<stdio.h>
int main()
{
    float mps;
    float megabyte;
    float time;
    printf("enter the download speed in Mbps:");
    scanf("%f",&mps);
    printf("enter the size of the file in megabytes:");
    scanf("%f",&megabyte);
    time=megabyte*8/mps;
    printf("At %f Mbps,it will take %f seconds to download %f megabytes.",mps,time,megabyte);
    return 0;
}