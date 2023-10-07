#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n)
    {
        sum= sum+pow (-1, i)*i;
        i++;
    }
    cout<<sum<<endl;
}