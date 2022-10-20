#include <stdio.h>
int delitele(int x[], int pocetx, int y[], int k)
{
    int sucet;
    int l=0;
    int i = 0;
    for(i=0; i < pocetx;i++)
    {
        if(x[i] != 0)
        {
            if(k%x[i]==0)
            {
                y[l] = x[i];
                l++;
                sucet++;
            }
        }
    }
    return sucet;
}
int main()
{
    int x[10]={4,7,10,2,3,9,6,5,8,12};
    int y[10];
    int i = 0;
    int pocetx = 10;
    int pocety = delitele(x,pocetx,y,24); //prekopírovanie prvkov
    printf("pocety: %d\ny: {",pocety);
    for(i=0;i < pocety;i++)
    {
        if(i > 0) //vypísanie zátvoriek a čiarok
            printf(", ");
        printf("%d",y[i]);
    }
    printf("}\n");

    
    return 0;
}