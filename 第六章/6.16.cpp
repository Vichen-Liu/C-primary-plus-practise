#include<stdio.h>
int main()
{
    double Daphne=0.1;
    double Deirdre=0.05;
    double Daphne_count=100;
    double Deirdre_count=100;
    int n=0;
    while(Daphne_count>=Deirdre_count)
    {
        double Daphne_p=10;
        Daphne_count+=Daphne_p;
        double Deirdre_p=Deirdre_count*Deirdre;
        Deirdre_count+=Deirdre_p;
        n++;
    }
    printf("第%d年超过\n",n-1);
    printf("%lf\n",Daphne_count);
    printf("%lf",Deirdre_count);
    return 0;
}