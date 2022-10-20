#include <stdio.h>
#include <math.h>

void kvadraticka_rovnica(double *a, double *b,double *c)
{
    double D; // diskriminant
    double K1; //koren_1
    double K2; //koren_2

    
    D = (*b) * (*b) - 4 * (*a) * (*c);
    if(D>0) //ak je diskriminant väčší ako 0
    {
        printf("Pocet korenov kvadratickej rovnice je: 2\n");
        K1 = (-(*b) + sqrt(D)) / (2 * (*a)); //výpočet korenov
        K2 = (-(*b) - sqrt(D)) / (2 * (*a)); 
        printf("Prvý koren má hodnotu = %lf\nDruhy koren ma hodnotu = %lf\n", K1, K2);
    }//vypis korenov
    else if(D==0) //ak je diskriminant rovný 0 , iba jeden koren
    {
        printf("Pocet korenov kvadratickej rovnice je: 1\n");
        K1 = (-(*b) + sqrt(D)) / (2 * (*a));
        K2 = 0; //koren 2 je rovný 0
        printf("Prvý koren má hodnotu = %lf\nDruhy koren ma hodnotu = %lf\n", K1, K2);
        printf("Rovnica má jeden dvojnásobný koreň %lf\n",K1);
    } //výpis korenov
    else //ak je diskriminant <0
    {
        printf("Imaginárne korene\n"); //iracionálne korene
        K1 = -(*b)/(2*(*a));
        K2 = sqrt(-D)/(2*(*a));
        printf("Prvý koren má hodnotu = %.2lf+%.2lfi\nDruhy koren ma hodnotu = %.2lf-%.2lfi\n", K1, K2,K1,K2);


    }
    
    
}
int main(void)
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c); //načítanie a,b,c
    kvadraticka_rovnica(&a,&b,&c); //zavolanei funkcie
    return 0;
}