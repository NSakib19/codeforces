#include<stdio.h>
#include<math.h>
int main()
{
    float a,u,v,t,s;
    scanf("%f %f %f",&u,&v,&t);
    a=(v-u)/t;
    s=u*t+0.5*a*t*t;
    printf("distance traveled %f and acceleration was %f",s,a);
    return 0;
}
