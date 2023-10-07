#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q;
    cout<<"Number of Process : "<<endl;
    cin>>n;
    cout<<"Enter quantam time : "<<endl;
    cin>>q;
    int l=n,c=0,p[n],bt[n],temp[n],i,comp,ta[n],wt[n],pq[n],temp1; //temp1 for temp data in swapping and temp array is for changing bt
    cout<<"enter processes :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<"enter burst time :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>bt[i];
        temp[i]=bt[i];
    }
    cout<<"enter priority :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>pq[i];
    }

    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(pq[i]>pq[j])
        {


            temp1=p[i];
            p[i]=p[j];
            p[j]=temp1;

            temp1=bt[i];
            bt[i]=bt[j];
            bt[j]=temp1;


        }
        }
    }

    for(comp=0,i=0;n!=0;)
    {
        if(temp[i]<=q && temp[i]>0)
        {
            comp=comp+temp[i];
            temp[i]=0;
            c=1;
        }
        else if(temp[i]>0)
        {
            temp[i]=temp[i]-q;
            comp=comp+q;
        }
        if(temp[i]==0 && c==1)
        {
            n--;
        wt[i]=comp-bt[i];
        ta[i]=comp;
        c=0;
        }
        if(i==l-1)
        {
            i=0;
        }
        else
            {
            i++;
        }
    }
    cout<<"Process"<<"\t\t";
    cout<<"Priority"<<"\t\t";
    cout<<"Burst Time"<<"\t\t";
    cout<<"Waiting Time"<<"\t\t";
    cout<<"Turn Around Time"<<endl;
    for(i=0; i<l; i++)
    {
        cout<<p[i]<<"\t\t"<<pq[i]<<"\t\t\t"<<bt[i]<<"\t\t\t\t"<<wt[i]<<"\t\t\t"<<ta[i]<<endl;
    }



}
