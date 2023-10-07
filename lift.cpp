#include<iostream>
using namespace std;
int r[1000];
int lift(int k,int j,int i)
{

    if(k>j)
    {
        r[i]=(k-j)*4+19;

    }
    else
    {
        r[i]=(j*4)+19;

    }




}


int main()
{
    int t,k[100],j[100];
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>k[i]>>j[i];
    }
    for(int i=0; i<t; i++)
    {
        lift(k[i],j[i],i);
    }
    for(int i=0; i<t; i++)
    {
        cout<<"case "<<i+1<<":"<<r[i]<<endl;
    }
}
