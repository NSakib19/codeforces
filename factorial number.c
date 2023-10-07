#include<stdio.h>
int main()
{
    int n,i,f;
    f=i=1;
    printf("Enter a Number to find factorial: ");
    scanf("%d",&n);
    while (i<=n)
    {
        f=f*i;
        ++i;

    }
    printf("The Factorial of %d is %d\n",n,f);
    return 0;
}
