#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int total = a+b+c+n;
        int maxV = max(a,max(b,c));
        if(total%3==0 && (total/3)>=maxV)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
