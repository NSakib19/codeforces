#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,maxlen=1,preLen =1;
    cin>>n;
    int arr[n],Imem[n-1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //1 7 2 11 15
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1]) preLen++;
        else preLen =1;
        if(maxlen<preLen) maxlen = preLen;
    }
    cout<<maxlen<<endl;

}
