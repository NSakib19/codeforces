#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p[n],bt[n],wt[n];
    for(int i=0; i<n; i++)
    {
        cin>>p[i]>>bt[i];
    }
    wt[0]=0;
    cout<<"process"<<'\t'<<"burst time"<<'\t'<<"waiting time"<<endl;
    cout<<p[0]<<'\t'<<bt[0]<<'\t'<<'\t'<<wt[0]<<endl;
    for(int i=0; i<n-1; i++)
    {


        wt[i+1]=bt[i]+wt[i];
        cout<<p[i+1]<<'\t'<<bt[i+1]<<'\t'<<'\t'<<wt[i+1]<<endl;
    }

}
