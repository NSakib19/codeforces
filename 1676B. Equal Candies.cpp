#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int box,sum =0;
        cin>>box;
        int arr[box];
        for(int i=0;i<box;i++)
        {
            cin>>arr[i];
        }
        int k = sizeof(arr) / sizeof(arr[0]);
        int minv =*min_element(arr, arr + k);
        for(int i=0;i<box;i++)
        {
            sum = sum + (arr[i]-minv);
        }
        cout<<sum<<endl;
    }
}
