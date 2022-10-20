#include <stdio.h>

int nacitaj(double *c1,double *c2)
{
    return scanf("%lf %lf",c1,c2)==2;  //načíta dve čísla
}

void vypocitaj(double a, double b, double *S,double *o)
{
    *S = a*b; //vypočíta obsah
    *o = 2*(a+b); // vypočíta obvod
}
int main()
{
    double a,b,S,o; 
    if(!nacitaj(&a,&b)) // ošetrenie ak v načítaní sme načítali viac čísel
    {
        printf("Zly vstup");
        return 0;
    }
    vypocitaj(a,b,&S,&o);
    printf("Obsah je : %0.3lf\n",S); // vypísanie obsahu
    printf("Obvod je : %.3lf\n",o); // vypisanie obvodu
    return 0;
}