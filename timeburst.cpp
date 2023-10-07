#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    int burst[n],result[n];
    int bt[n],refbt[n];
    for(int i=0; i<n; i++)
    {
        burst[i]=i;
        cin>>bt[i];
    }
    for(int i=0; i<n; i++)
    {
        refbt[i]=bt[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(bt[i]>bt[j])
            {
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int r=0; r<n; r++)
        {
            if(bt[i]==refbt[r])
                result[i]=r;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<"Processes"<<'\t'<<"burst time"<<'\t'<<"sorted burst time"<<endl;
        cout<<burst[i]<<'\t'<<"      "<<bt[i]<<'\t'<<"       "<<result[i]<<endl;
    }
    return 0;
}
