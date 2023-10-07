#include<stdio.h>
int main()
{
    char a[50];
    int b;
    double c,d;
    scanf("%s",&a);
    scanf("%d %0.2lf",&b,&c);
    d=b+(c*0.15);
    printf("TOTAL = R$ %0.2lf\n",d);
    return 0;
}
