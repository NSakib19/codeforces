#include <stdio.h>
int main()
{
    int a,b,e,g;
    float c,d,f,h,i;
    scanf("%d %d %f",&a,&b,&c);
    scanf("%d %d %f",&e,&g,&d);
    f=b*c;
    h=g*d;
    i=f+h;
    printf("Valor a pagar: R$% 0.2f\n",i);
    return 0;
}
