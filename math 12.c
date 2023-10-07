#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int num,n,digits[100],k,rem,i,sum=0;
    scanf("%d",&num);
    k=num;
    while(num !=0)
    {
        n=num/10;
        n++;
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
