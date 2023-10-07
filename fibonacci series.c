#include<stdio.h>
int main()
{
    int term1,nexterm,f,i,n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    term1 =1;
    nexterm=1;
    printf("%d\n",term1);
    printf("%d\n",nexterm);
    for (i=0; i<n; ++i)
    {
        f=nexterm+f;
        printf("%d\n",f);
        nexterm=term1;
        f=nexterm;

    }
    return 0;

}
