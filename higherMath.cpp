#include<bits/stdc++.h>
using namespace std;

int res[200];

void upright(double a,double b,double c,int i)
{
    if((a*a)+(b*b)==(c*c))
        res[i]= 1;
    else
        res[i]= 0;
}

int main()
{
    int t;
    cin>>t;
    double a[t],b[t],c[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        upright(a[i],b[i],c[i],i);
    }
    for(int i=0;i<t;i++)
    {
        if(res[i]==1)
            cout<<"Case "<<i+1<<":"<<" YES"<<endl;
        else
            cout<<"Case "<<i+1<<":"<<" NO"<<endl;


    }

}
