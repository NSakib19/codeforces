#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int flag =0;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k = sizeof(arr) / sizeof(arr[0]);


    sort(arr, arr + k);

    int temp;

    for(int i =0;i<n;i++)
    {
        if(arr[i]<4)
        {
            temp = arr[i]
            temp = temp + arr[i+1];
            if(temp <=)
        }
    }
}
