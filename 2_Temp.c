/*
    Write a C program to read temperature in centigrade and display a suitable
    message according to temperature state.
*/

#include<stdio.h>
int main(){

    //Declaration
    int temp;

    //Input temp
    printf("Enter the Temperature state : ");
    scanf("%d", &temp);

    //Conditions and output
    if(temp < 0)
        printf("Frezzing Weather");
    else if(temp >= 0 && temp < 10)
        printf("Very Cold Weather");
    else if(temp >= 10 && temp < 20)
        printf("Cold Weather");
    else if(temp >=20 && temp < 30)
        printf("Normal in Temperature");
    else if(temp >=30 && temp < 40)
        printf("Its Hot! Weather");
    else if(temp >= 40)
        printf("it's Very Hot Weather");

    return 0;
}
