#include<iostream>

using namespace std;



int main()
{
    int n;
    cin>>n;
    int i,j,temp,art[n],bt[n],wt[n],pr[n],tat[n],pos;
    for(i=0; i<n; i++)
    {
        cin>>bt[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>art[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>pr[i];
    }
    for(i=0; i<n; i++)
    {
        pos=i;
        for (j=i+1; j<1; j++)
        {
            if(pr[j]<pr[pos])
            {
                pos=j;
            }
        }
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;

        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;

        temp=art[i];
        art[i]=art[pos];
        art[pos]=temp;
    }
    wt[0]=0;
    cout<<"process\tbrust time\t arrival time\tpriority \twaiting time\tturnaround time"<<endl;
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<n;j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        cout<<i+1<<"\t\t"<<bt[i]<<"\t\t"<<art[i]<<"\t\t"<<pr[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
    }
}
