#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of 3 sides of the triangle");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && b==c){printf("This is an equilateral triangle");}
    else if(a==b || b==c || c==a){printf("This is an isosceles triangle");}
    else { printf("This is a scalene triangle");}
    return 0;
}
