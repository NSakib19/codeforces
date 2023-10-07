#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number>=80)
    {
        printf("A+");
    }
    else if(number>=70)
    {
        printf("A");
    }
    else if(number>=60)
    {
        printf("A-");
    }
    else if(number>=50)
    {
        printf("B");
    }
    else if(number>=40)
    {
        printf("C");
    }
    else if(number>=33)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
}
