#include<stdio.h>
int main()
{
    int j,k,num,i,bin[100];
    scanf("%d",&num);
    for(i=0; num!=0; i++)
    {
        k=num%2;
        num=num/2;
        bin[i]=k;

    }
    for (int j=i-1; j>=0; j--)
    {
        printf("%d",bin[i]);

    }
    return 0;
}
