#include<iostream>
#include<cmath>
int i=1,r=0;
double cfunc(int n)
{
    for(int i=1;i<=n;i++)
    {
        r=r+pow(-1,i)*i;


    }
    return r;
}

int main()
{
    double n;
    std :: cin >>n;
    cfunc(n);
    std :: cout<< r;
}
