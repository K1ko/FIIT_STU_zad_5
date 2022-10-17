#include <stdio.h>
//maximum čísel
int maximum(int *c1,int *c2){
    if(*c1 > *c2)
    {
        return *c1;
    }
    else{return *c2;}
}
int main()
{
    int c1,c2;
    int s;
    scanf("%d %d",&c1,&c2);
    s = maximum(&c1,&c2);
    printf("Cislo %d je vacsie.\n",s);
    return 0;
}