#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,q;
cout<<"Enter the Number of Process:";
cin>>n;
cout<<"Enter  Quntum:";
cin>>q;
int i,j, p[n],b[n],d[n],w[n],n1,ta[n];
n1=n;
cout<<"Enter the Process:";
for(i=0;i<n;i++)
{
    cin>>p[i];

}

cout<<"Enter the Burst Time:";
for(i=0;i<n;i++)
{
    cin>>b[i];

}
int rt[n];
    for (int i = 0; i < n; i++)
    {
        rt[i] = b[i];
    }
    int t=0,check = 0;
    for(t=0,i=0;n!=0;)
    {
        if(rt[i]<=q && rt[i]>0)
        {
            t=t+rt[i];
            rt[i]=0;
            check=1;
        }
        else if(rt[i]>0)
        {
            rt[i]=rt[i]-q;
            t=t+q;
        }
        if(rt[i]==0 && check==1)
        {
            n--;
        w[i]=t-b[i];
        ta[i]=t;
        check=0;
        }
        if(i==n1-1)
        {
            i=0;
        }
        else
            {
            i++;
        }
    }

        cout<<"Process"<<"\t\t";
    cout<<"Burst Time"<<"\t";
    cout<<"Waiting Time"<<"\t";
    cout<<"Turn Around Time"<<endl;
    for(i=0; i<n1; i++)
    {
        cout<<p[i]<<"\t\t"<<b[i]<<"\t\t"<<w[i]<<"\t\t"<<ta[i]<<endl;
    }
}