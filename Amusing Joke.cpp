#include<iostream>
#include<string>

using namespace std;

int main()
{
    string guest,host,pword; //pword = pile of words
    getline(cin,guest);
    getline(cin,host);
    getline(cin,pword);

    string fullname = guest+host;

    string::iterator it1;
    string::iterator it2;
    for (it1=fullname.begin(); it1!=fullname.end(); it1++)
    {
        for (it2=pword.rbegin(); it2!=pword.rend(); it2++)
        {
            if(*it1==*it2)
            {
                pword.push_back();
            }
        }
    }
    if(pword.empty())
        cout<<"yes"<<endl;
    else
        cout<<"No"<<endl;
}
