#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    double radi[t],result[t],pi=2*acos(0.0);

    for(int i=0; i<t; i++)
    {
        cin>>radi[i];
    }
    for(int i=0; i<t; i++)
    {
        double a=pow((2*radi[i]),2),b=pi*pow((radi[i]),2);
        result[i]= a-b;
    }
    for(int i=0; i<t; i++)
    {
        cout<<fixed << setprecision(2)<<"case "<<i+1<<" : "<<result[i]<<endl;
        cout << endl;
    }
}
