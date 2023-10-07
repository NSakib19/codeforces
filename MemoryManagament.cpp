#include<iostream>
using namespace std;

int main()
{
    int n,l;
    cout<<"Enter Number of processes :";
    cin>>n;
    cout<<"Enter number of memory Locations :";
    cin>>l;
    int psize[n],memsize[l],tempmemsize[l],memindex[l];
    cout<<"Enter Process sizes :";
    for(int i=0;i<n;i++)
    {
        cin>>psize[i];
    }
    for(int i=0;i<l;i++)
    {
        cin>>memsize[i];
        tempmemsize[i]=memsize[i];
    }
    for(int i =0;i<n;i++){
    for(int j=0;j<l;){

        if(psize[i]<=tempmemsize[j])
        {
            tempmemsize[j]=tempmemsize[j]-psize[i];
            memindex[i]=j;
            j=l;
        }

    }
    }
    cout<<"process\t"<<"\tprocess size\t"<<"\tmemory size\t"<<"\tmemory index"<<endl;
    for(int i =0;i<n;i++){
    cout<<i<<"\t\t"<<psize[i]<<"\t\t\t"<<memsize[i]<<"\t\t\t"<<memindex[i]<<endl;
    }
}
