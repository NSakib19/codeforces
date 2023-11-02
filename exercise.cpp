#include<iostream>
#include<stdio.h>
#include<string.h>

double div(double a,double b)
{
    double q = a/b;
    return q;

}


using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<div(double(x),double(y))<<endl;

}
