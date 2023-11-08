#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        int temp = (((k-y)/x)*x)+y;
        cout<<temp<<endl;

    }
}
