#include<stdio.h>
int main()
{
    int n,k,r=0,sum=0,i;
    printf("Enter the number of divition of the triangle");
    scanf("%d",&n);
    k=pow (2, n) ;
    for(i=0; i<k; i++)
    {
        r=r+1;
        sum=sum+r;

    }
    printf ("%d",sum);
    return 0;
}
