#include <bits/stdc++.h>

using namespace std;

void pairsort(int x[], int y[], int len)
{
    pair<int, int> pairt[len];
  
    // Storing the respective array
    // elements in pairs.
    for (int i = 0; i < len; i++) 
    {
        pairt[i].first = x[i];
        pairt[i].second = y[i];
    }
  
    // Sorting the pair array.
    sort(pairt, pairt + len);
      
    // Modifying original arrays
    for (int i = 0; i < len; i++) 
    {
        x[i] = pairt[i].first;
        y[i] = pairt[i].second;
    }
}

int main()
{
    int s,n;
    cin>>s>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    int len = sizeof(x) / sizeof(x[0]);

    pairsort(x, y, len);
    int flag =0;
    for(int i=0;i<len;i++)
    {
        if(s>x[i])
        {
            s=s+y[i];
            flag++;
            
        }
        else 
        {
            cout<<"NO"<<endl;
            break;
        }
    }
    if(flag==n)
    {
        cout<<"YES"<<endl;
    }
        
}
