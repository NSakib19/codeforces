#include<stdio.h>
int  main()
{
    int num,arr[10000],i;
    scanf("%d",&num);
    for(i=0; i<num; i++)
    {
        arr[i]=num%2;
        num=num/2;
    }
    for(i=0; i<num; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
