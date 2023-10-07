#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int n= a.length();
    sort(a.rbegin(),a.rend());
    for(int i=0; i<floor(n/2); i++)
    {
        a.pop_back();
    }
    sort(a.begin(),a.end());

    for (int i = 0; i <=ceil(n/2); i++)
    {
        cout << a[i];
        if(i<(floor(n/2)))
            cout<<"+";
    }
}
