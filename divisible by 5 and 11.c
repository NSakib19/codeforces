#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if((number%5 ==0) && (number%11==0))
    {
        printf("Yes this number is divisible by 5 and 11");

    }
    else
    {
        printf("No this number is not divisible by 5 and 11");
    }
    return 0;
}
