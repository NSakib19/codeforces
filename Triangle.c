#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of 3 angles of the triangle");
    scanf("%f %f %f",&a,&b,&c);
    if(a+b+c==180){printf("the triangle is valid");}
    else{printf("the triangle is not valid");}
    return 0;
}
