#include<stdio.h>
#include<math.h>
int main()
{
        double x;
        char op;
        int k,j;
        scanf("%c",&op);
        scanf("%lf",&x);
        switch(op)
        {
        case '+':
                k = ceil(x);
        printf("%d\n",k);
        j= floor(x);
        printf("%d",j);
        break;
        case '-':
        k = ceil(x);
        printf("%d\n",k);
         j= floor(x);
        printf("%d",j);
        break;
        }
        return 0;
}

