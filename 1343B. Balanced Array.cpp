#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int k = n/2;
        if((k)%2 == 1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            int j=0;
            for(int i=0; i<k; i++)
            {
                arr[i]=j+2;
                j+=2;
            }
            j=-1;
            for(int i=k; i<n-1; i++)
            {
                arr[i]=j+2;
                j+=2;
            }
            arr[n-1]=((k*(k+1))-((k-1)*(k-1)));
            for(int i=0; i<n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

    }
}
