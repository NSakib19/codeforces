#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n,x=0,dy,yx=2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        dy=-2*yx+4*exp(-x);
        cout<<x<<'\t'<< yx <<'\t'<<'\t'<< dy<<endl;
        x=x+0.5;

        yx=yx+0.5*dy;



    }
}
