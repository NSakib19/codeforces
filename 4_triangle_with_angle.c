/*
    Write a C program to check whether a triangle can be formed by the given
    value for the angles.
*/

#include<stdio.h>
int main(){

    //Declaration
    int angle_a, angle_b, angle_c, sum;

    //Inputs angle_a, angle_b, angle_c
    printf("Enter all the Angles of a Triangle : \n");
    printf("Angle a = ");
    scanf("%d", &angle_a);
    printf("Angle b = ");
    scanf("%d", &angle_b);
    printf("Angle c = ");
    scanf("%d", &angle_c);

    //Operation
    sum = angle_a + angle_b + angle_c;

    //Conditions and Output
    if(sum == 180)
        printf("The Triangle is valid.");
    else
        printf("The triangle is not valid.");


    printf("\n");

    return 0;

}
