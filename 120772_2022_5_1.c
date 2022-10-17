#include <stdio.h>

int nacitaj(double *c1,double *c2)
{
    return scanf("%lf %lf",c1,c2)==2;
}

void vypocitaj(double a, double b, double *S,double *o)
{
    *S = a*b;
    *o = 2*(a+b);
}
int main()
{
    double a,b,S,o;
    if(!nacitaj(&a,&b))
    {
        printf("Zly vstup");
        return 0;
    }
    vypocitaj(a,b,&S,&o);
    printf("Obsah je : %0.3lf\n",S);
    printf("Obvod je : %.3lf\n",o);
    return 0;
}