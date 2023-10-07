#include<stdio.h>
int main()
{
    int array[50],i,n,largest;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&array[i]);
    }
    largest = array[0];
    for(i=1;i<n;++i)
    {
        if(largest<array[i])
            largest= array[i];
    }
            printf("%d in the largest\n",largest);

    return 0;
}
