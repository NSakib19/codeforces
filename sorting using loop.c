#include<stdio.h>
int main()
{
    int a[10],i,n,k,j[10];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&n);
    }
    for (i=0;i<n;i++)
    {    for (j=i+1;j<n;j++)
    {
        if (a[i]>j[i])
            k=j[i];
        j[i]=a[i];
    }

        printf("%d\n",a[i]);
    }
    return 0;
}
