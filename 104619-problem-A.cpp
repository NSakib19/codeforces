#include<bits/stdc++.h>

using namespace std;

int main() {
    string date;
    string year,mm,dd;

    cin>>date;

    for(int i = 0;i<4;i++)
    {
        year.append(date[i]);
    }
    cout<<year<<endl;

    return 0;
}
