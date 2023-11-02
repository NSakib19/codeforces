#include<iostream>

using namespace std;

int main(){
    int t;
    int r,np=0,flag=0;
    cin>>t;
    while(t--)
    {
        cin>>r;
        if(r>0)
        {
            np+=r;
        }
        else
        {
            flag++;
            if(np>0)
            {
                np--;
                flag--;
            }

        }
    }
    cout<<flag<<endl;
}

