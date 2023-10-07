#include<bits/stdc++.h>
using namespace std;


int main()
{
    int k,i=0,res[100];
    cin>>k;
    while(k<0)
        {

        res[i]=k%2;
        i++;
        k=k/2;
    }
    cout<<sizeof(res)/sizeof(res[0])<<endl;
    for(int i= 0;i<sizeof(res);i++)
    cout<<res[i];
}
