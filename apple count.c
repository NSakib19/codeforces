#include<stdio.h>
int main()
{
    int a,w,i;
    double c;
    scanf("%d",&a);
            scanf("%d",&w);

    for (i=0;i<a;++i)
    {
        c=w/1000;
        printf(".3%lf\n",c);
    }
    return 0;
}
