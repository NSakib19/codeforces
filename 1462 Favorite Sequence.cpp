#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
        }
        int even[n/2],odd[n/2];
        int j=0,k=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                even[j]=a[i];
                j++;
            }
            else
            {
                odd[k]=a[i];
                k++;
            }
        }
        //reverse(a, a + n/2);
        for(int i=0;i<n/2;i++)
            cout<<even[i];
        cout<<endl;
        for(int i=0;i<n/2;i++)
            cout<<odd[i];
    }
}
