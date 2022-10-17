#include <stdio.h>
#include <math.h>

void kvadraticka_rovnica(double *a, double *b,double *c)
{
    double D;
    double K1;
    double K2;

    
    D = (*b) * (*b) - 4 * (*a) * (*c);
    if(D>0)
    {
        printf("Pocet korenov kvadratickej rovnice je: 2\n");
        K1 = (-(*b) + sqrt(D)) / (2 * (*a));
        K2 = (-(*b) - sqrt(D)) / (2 * (*a));
        printf("Prvý koren má hodnotu = %lf\nDruhy koren ma hodnotu = %lf\n", K1, K2);
    }
    else if(D==0)
    {
        printf("Pocet korenov kvadratickej rovnice je: 1\n");
        K1 = (-(*b) + sqrt(D)) / (2 * (*a));
        K2 = 0;
        printf("Prvý koren má hodnotu = %lf\nDruhy koren ma hodnotu = %lf\n", K1, K2);
        printf("Rovnica má jeden dvojnásobný koreň %lf\n",K1);
    }
    else
    {
        printf("Imaginárne korene\n");
        K1 = -(*b)/(2*(*a));
        K2 = sqrt(-D)/(2*(*a));
        printf("Prvý koren má hodnotu = %.2lf+%.2lfi\nDruhy koren ma hodnotu = %.2lf-%.2lfi\n", K1, K2,K1,K2);


    }
    
    
}
int main(void)
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    kvadraticka_rovnica(&a,&b,&c);
    return 0;
}