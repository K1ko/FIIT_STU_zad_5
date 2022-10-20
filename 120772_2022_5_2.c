#include <stdio.h>
//maximum čísel
int maximum(int *c1,int *c2){
    if(*c1 > *c2) //porovnanie adries
    {
        return *c1;
    }
    else{return *c2;}
}
int main()
{
    int c1,c2;
    int s;
    scanf("%d %d",&c1,&c2); //načítanie čísel
    s = maximum(&c1,&c2);  //vypočítanie maxima
    printf("Cislo %d je vacsie.\n",s); //vypísanie väčšieho čísla
    return 0;
}