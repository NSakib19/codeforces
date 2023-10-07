#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int k[t];
    for(int i=0; i<t; i++)
    {
        cin>>k[i];
    }
    int a[25],b[25];
    for(int i=0; i<t; i++)
    {
        if(k[i]<20)
        {
            if(k[i]<10)
            {
                a[i]=k[i];
                b[i]=0;
            }
            else
            {
                a[i]=10;
                b[i]=k[i]-10;
            }
        }
    }
    for(int i=0; i<t; i++)
    {
        cout<<a[i]<<" "<<b[i]<<endl;
    }
    return 0;
}
