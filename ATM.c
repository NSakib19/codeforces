#include<stdio.h>
int main()
{
    int cash,total;
    float balance;
    scanf("%d %d",&cash,&total);
    if(cash%5!=0)
    {
        balance= total- cash - 0.50;
        printf("%.2",balance);
    }
    else
        printf("%.2f",total);
        return 0;
}
