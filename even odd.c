#include<stdio.h>
int main()
{
    int number,reminder;
    scanf("%d",&number);
    reminder = number % 2;
    if (reminder == 0) {
            printf("the number is even\n");
    }

    else {
            printf("the number is odd\n");
    }
    return 0;
}
