#include<stdio.h>
#include<math.h>

int main()
{
    double n,p,k;
    scanf("%lf",&n);
    scanf("%lf",&p);
    k=pow(p,(1/n));
    printf("%.0lf",k);
    return 0;
}
