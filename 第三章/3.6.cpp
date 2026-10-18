#include<stdio.h>
int main()
{
    float mass_mol=3.0e-23;
    float mass_qt=950;
    float quarts;
    float molecules;
    printf("Enter the number of quarts of water:");
    scanf("%f",&quarts);
    molecules=mass_qt*quarts/mass_mol;
    printf("The number of water molecules in %f quarts is %e\n",quarts,molecules);
    return 0;
}