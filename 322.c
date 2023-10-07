#include<stdio.h>
int main()
{
    int y1,y2,ans;
    scanf("%d %d", &y1, &y2);
    ans = ((y2/4 - (y1-1)/4 ) - (y2/100 - (y1-1)/100) )  + ( y2/400 - (y1-1)/400 ) ;
    printf("%d",ans);
    }
