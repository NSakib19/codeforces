#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cout<<"Number of processes: "<<endl;
    cin>>n;
    int p[n],bt[n],arti[n],wt[n],b[n]; //arti= arrival time
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        cin>>bt[i];
        cin>>arti[i];
    }
  for (int k = 0; k < n - 1; k++)
    {
    for (int i = 0; i < n - k - 1; i++)
    {


      if (arti[i] > arti[i + 1]) {


        int temp = arti[i];
        arti[i] = arti[i + 1];
        arti[i + 1] = temp;

        temp = bt[i];
        bt[i] = bt[i+1];
        bt[i+1]= temp;
      }
    }
    }

    for (int i=1;i<n;i++)
    {
        b[i]=b[i]+bt[i];
        wt[i]=b[i]+arti[i];
    }
    cout<<"process"<<"\t"<<"Burst time"<<"\t"<<"Arrival time"<<"\t"<<"Waiting time"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"p"<<i<<"\t"<<bt[i]<<"\t"<<arti[i]<<"\t"<<wt[i]<<endl;
    }

}
