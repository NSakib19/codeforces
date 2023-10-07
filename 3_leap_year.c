/*
    Write a C program to find whether a given year is a leap year or not.
*/
#include<stdio.h>
int main(){

    //Declarations
    int year;

    //Input year
    printf("Enter a year :  \n");
    printf("Year = ");
    scanf("%d", &year);

    //Conditions And Output
    if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
        printf("This is a Leap Year.");
    else
        printf("This is NOT a Leap Year.");

    printf("\n");
    return 0;
}
