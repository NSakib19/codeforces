#include<stdio.h>
int main(){
    int b,d,count=0;
    scanf("%d %d",&b,&d);
    for (int i= b;i<=d;i++){
        if(i%4!=0 && i%400!=0)
        continue;
        else
        count++;
    }
    printf("%d",count);
    return 0;
}
