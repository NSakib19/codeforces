/*
    Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
*/

#include<stdio.h>
int main(){

    //Declaration
    int a, b, c;

    //Inputs a, b, c
    printf("Enter The Values of Triangle Arm Length : \n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    //Conditions and Outputs
    if(a == b && b == c)
        printf("This is a Equilateral Triangle.");
    else if(a == b || a == c || b == c )
        printf("This is a Isosceles Triangle.");
    else
        printf("This is a Scalene Triangle.");

    printf("\n");

    return 0;
}
