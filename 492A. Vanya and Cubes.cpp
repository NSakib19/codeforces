#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum =0,height =0;
    for(int i=1;n>0;i++)
    {
        sum = sum+i;
        if((n-sum)>=0) height++;
        n = n-sum;
    }
    cout<<height<<endl;
}
