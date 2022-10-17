#include <stdio.h>
void vymen(int *, int *);
int main()
{
    int a = 10,b = 14;
    printf("p_a: %p %d\n",&a,a);
    printf("p_b: %p %d\n",&b,b);
    vymen(&a,&b);
    printf("p_a: %p %d\n",&a,a);
    printf("p_b: %p %d\n",&b,b); 
    return 0;
}
void vymen(aa,bb)
int *aa,*bb;
{
    int sw;
    sw = *aa;
    *aa = *bb;
    *bb =sw;
}