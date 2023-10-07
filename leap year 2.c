#include<stdio.h>
int main()
{
    int b,d,count=0;
    scanf("%d %d",&b,&d);
    if(b%2==0)
    {

        for (int i= b; i<=d; i=i+2)
        {
            if(((i% 4 == 0) && (i% 100 != 0)) ||
                    (i% 400 == 0))
                count++;
            else
                continue;
        }
    }
    else
    {
         b=b+1;
        {

            for (int i= b; i<=d; i=i+2)
            {
                if(((i% 4 == 0) && (i% 100 != 0)) ||
                        (i% 400 == 0))
                    count++;
                else
                    continue;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
