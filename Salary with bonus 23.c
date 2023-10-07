#include<stdio.h>
int main()
{
    char name[50];
    double a,b,c;
    printf("Enter the name of seller\n");
    scanf("%s",&name);
    scanf("%lf %lf",&a,&b);
    c= a+(0.15*b);
    printf("TOTAL = R$ %.2lf\n",c);
    return 0;
}
