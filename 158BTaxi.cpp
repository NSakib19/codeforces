#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int j,ncount[5];
    for(int i =0;i<n;i++)
    {
        cin>>j;
        if(j== 1)
            ncount[j] = ncount[j]+1;
        else if(j== 2)
            ncount[j] = ncount[j]+1;
        else if(j== 3)
            ncount[j] = ncount[j]+1;
        else
            ncount[j] = ncount[j]+1;

    }
    for(int i=0;i<n;i++)
    {
        cout<<ncount[j]/n;
    }


}
