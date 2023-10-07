#include<stdio.h>
int main()
{
    int digit;
    printf("Enter a digit");
    scanf("%d",&digit);
    switch(digit)
    {
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
        default:
        printf("Entered digit in not valid");
    }



    return 0;
}
