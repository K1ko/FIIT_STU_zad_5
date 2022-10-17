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
    int x[10],pocetx;
    int y[10];
    int i = 0;
    scanf("%d",&pocetx);
    for(i = 0; i < pocetx;i++)
        scanf("%d",&x[i]);
    int pocety = delitele(x,pocetx,y,24);
    printf("pocety: %d\ny: {",pocety);
    for(i=0;i < pocety;i++)
    {
        if(i > 0)
            printf(", ");
        printf("%d",y[i]);
    }
    printf("}\n");

    
    return 0;
}