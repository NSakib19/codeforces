#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int n=str.length();
    int upper=0;
    int lower=0;
    for(int i =0;i<n;i++)
    {
        if(isupper(str[i])==1)
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    //cout<<upper<<endl;
    //cout<<lower<<endl;
    if(upper>lower)
    {
            for(int i =0;i<n;i++)
            {
                str[i]= toupper(str[i]);
                cout<<str[i];
            }
            cout<<endl;

    }
    else if(upper<lower)
    {
            for(int i =0;i<n;i++)
            {
                str[i]= tolower(str[i]);
                cout<<str[i];
            }
            cout<<endl;

    }
    else
    {
            for(int i =0;i<n;i++)
            {
                str[i]= tolower(str[i]);
                cout<<str[i];
            }
            cout<<endl;

    }
}