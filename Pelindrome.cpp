#include<iostream>
using namespace std;

int main()
{
    int t,revnum[t];
    int remainder[t];
    int n[t];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n[t];
    }
    for(int i=0;i<t;i++)
    {
        remainder[i] = 0;
        revnum[i] =0;
        remainder[i] =n[i]%10;
        revnum[i] = revnum[i]*10 + remainder[i];
        n[i] /= 10;
    }
    int k[t];
    for(int i=0;i<t;i++)
    {
        if(revnum[i]==n[i])
            k[i]=1;
        else
            k[i]=0;
    }
    for(int i=0;i<t;i++)
        cout<<k[i]<<endl;
}
