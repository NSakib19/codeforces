#include<stdio.h>

int main()
{

    int n, temp, i, j, num[100],interchange=0,comparison=0,pass;

    printf("enter the nums of data: ");
    scanf("%d",&n);

    printf("Enter  Integers \n");

    for(i=0; i<n; i++)
        scanf("%d",&num[i]);


    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
                interchange=interchange+1;
            }
            comparison=comparison+1;
        }
    }

    printf("Sorted elements:\n");
    for(i=0; i<n; i++)
        printf(" %d\n",num[i]);
    printf("num of interchange: %d \n",interchange);
    printf("num of comparison: %d \n",comparison);

    printf("total pass = %d",n-1);
    return 0;
}
