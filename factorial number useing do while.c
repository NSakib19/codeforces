#include<stdio.h>
int main()
{
    int f,n,i;
    f=i=1;
    printf("Enter the Number to find Factorial: ");
    scanf("%d",&n);
    do
    { f*=i;
        ++i;
    }
    while (i<=n);
    printf("The factorial of %d is %d\n",n,f);
    return 0;
}
