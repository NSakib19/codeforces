#include<iostream>
#include <numeric>
using namespace std;
void calc(int x)
{
    int arr[x];
    for(int i =0; i<x; i++)
    {
        cin>>arr[i];
        int sum =0;
        sum = accumulate(arr, arr+x, sum);
        if (sum%2==0 && sum%3==0 )
            printf("yes");
        else
            printf("no");
    }

}



int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        calc(n);
    }
}

