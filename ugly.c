#include<stdio.h>
#include<math.h>
int max(int num1, int num2)
{
    if (num1 > num2 )
        return num1;
    else
        return num2;
}


int min(int num1, int num2)
{
    if(num1 > num2 )
        return num2;
    else
        return num1;
}
int main()
{
 long long a,b,c,n,i,ar[1599]={0},x,y,z;
    a=b=c=n=1;
    ar[1]=1;
    while(n!=1501)
    {
        //cout<<ar[n]<<endl;
        x=2*ar[a];
        y=3*ar[b];
        z=5*ar[c];
        ar[++n]=min(x,min(y,z));
        if(ar[n]==x)
            a++;
        if(ar[n]==y)
            b++;
            if(ar[n]==z)
            c++;
    }
    printf("The 1500'th ugly number is %lld ",ar[1500]);
}
