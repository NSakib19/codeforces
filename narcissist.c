#include<stdio.h>
#include<math.h>
int main()
{
    int num,n,j,digits[100],rem,i,sum=0,k;
    scanf("%d",&num);
    k=num;
    j=num;
    for(n=1; n<j; n++)
    {
        j=j/10;
    }
    for(i=0; i<n; i++)
    {
        rem=num%10;
        num=num/10;
        digits[i]= rem;

    }
    for(i=0; i<n; i++)
    {
        sum=sum+pow(digits[i],n);
    }
    if(k == sum)
    {
        printf("%d is a narsicistic number ",k);
    }
    else
    {
        printf("%d is not a narsicistic number ",k);
    }

    return 0;

}
