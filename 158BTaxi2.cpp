#include <bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int> array;
    vector<int>::iterator i;
    vector<int>::iterator j;
    int taxi;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        array.push_back(a);

    }
    sort(array.begin(), array.end());
    for(auto i=array.size();i>0;i--)
    {
        if(array[i]==4)
        {
            taxi++;
            array.pop_back();

        }
        else if(array.front == 1 && array.at(array.begin+1)==1)
        {
            array.insert(array.begin,2);
            array.erase(array.begin+1);
        }
        else
        {
            for(int j=0;j<array.size;j++)
            {
                if(array[i]==3 && array[j]==1)
                {
                taxi++;
                array.erase(i);
                array.erase(j);
                }
                else if(array[i]==2 && array[j]==2)
                {
                taxi++;
                array.erase(i);
                array.erase(j);
                }
            }

            
        }
    }
    cout<<taxi<<endl;


    

}