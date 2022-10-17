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
    scanf("%d %d",&c1,&c2);
    //maximum(&c1,&c2);
    printf("%d",maximum(&c1,&c2));
    return 0;
}