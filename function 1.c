#include<stdio.h>
float square(float x);
int main()
{
    float m,n;
    scanf("%f",&m);
    n = square(m);
    printf("%f",n);
    return 0;
}
float square(float x)
{
    float p;
    p = x*x;
    return (p);
}
