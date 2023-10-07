#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    long long int arr[m];

    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    long long int sum = arr[0]-1;
    for(int i=0;i<m-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            sum = sum + (arr[i+1]-arr[i]);
        }
        else if (arr[i]==arr[i+1])
        {
            sum = sum;
        }
        else if(arr[i]>arr[i+1])
        {
            sum = sum + n-(arr[i]-arr[i+1]);
        }
        
    }
    cout<<sum<<endl;

}