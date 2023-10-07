#include<stdio.h>
int main()
{
    int n,i,f;

    scanf("%d",&n);
    for (i=f=1;i<=n;++i){f=f*i;}
    printf("The Factorial of %d is %d\n",n,f);
    return 0;
}
