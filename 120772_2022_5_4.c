#include <stdio.h>
void vymen(int **, int **);
int main()
{ //výmena adries
    int *p_a,*p_b;
    int a = 10,b = 14;
    p_a=&a;
    p_b=&b;
    printf("p_a: %p %d\n",p_a,*p_a);
    printf("p_b: %p %d\n",p_b,*p_b);
    vymen(&p_a,&p_b);
    printf("p_a: %p %d\n",p_a,*p_a);
    printf("p_b: %p %d\n",p_b,*p_b); 
    return 0;
}
void vymen(int **p_a,int **p_b)

{
    //vymena adries
    int *sw;
    sw = *p_a;
    *p_a = *p_b;
    *p_b =sw;
}