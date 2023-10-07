#include<stdio.h>
int main()
{
    float mile,km,foot,inch;
    printf("1. Mile to km\n");
    printf("2. km to mile\n");
    printf("3. foot to inch\n");
    printf("4. inch to foot\n");
    printf("Enter any number (1-4)");
    int number;
    scanf("%d",&number);
    float length;
    scanf("%f",&length);
    switch(number)
    {
    case 1:
        length = length * 1.61;

    case 2:
        length = length * 0.62;
    case 3:
        length = length * 12;
    case 4:
        length = length * 0.083;

    }
    printf("%f",length);



}
