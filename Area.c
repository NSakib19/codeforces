#include <stdio.h>
#include <math.h>
int main()
{
    float A,B,C;
    double d,e,f,g,h,pi;
    scanf("%f %f %f",&A,&B,&C);
    pi=3.14159;
    d=0.5*A*C;
    e=pi*C*C;
    f=((A+B)/2)*C;
    g=B*B;
    h=A*B;
    printf("TRIANGULO: %0.3f\n",d);
    printf("CIRCULO: %0.3f\n",e);
    printf("TRAPEZIO: %0.3f\n",f);
    printf("QUADRADO: %0.3f\n",g);
    printf("RETANGULO: %0.3f\n",h);
    return 0;

}
