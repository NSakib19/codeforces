#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    char arr[8][8],res[8][8];
    int r=0,s=0;
    while(t--)
    {
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>arr[i][j];
                if(isalpha(arr[i][j]))
                {
                    res[r][s]=arr[i][j];
                    s++;
                }
                else
                {
                    res[r][s]=' ';
                    s++;
                }
            }
            r++;
        }

    }
    //int rows = sizeof(res)/sizeof(res[0]);
    //int cols = sizeof(res[0])/sizeof(res[0][0]);
    for(int k=0; k<8; k++)
    {
        for(int f=0;f<8;f++)
        {
            cout<<res[k][f];
        }
        cout<<endl;
    }
    return 0;



}

