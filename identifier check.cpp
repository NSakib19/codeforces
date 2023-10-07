#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int len = str.length();
    int flag =0;
    if((isalpha(str[0])) || str[0]=='_')
    {
        for(int i =1; i<len; i++)
        {
            if(!(isalpha(str[i])) && !(str[i]=='_') && !(isdigit(str[i])))
            {
                cout<<"This identifier is invalid"<<endl;
                break;
            }
            else
            {
                flag++;
            }
        }
        if(flag>0)
        {
            cout<<"This identifier is valid"<<endl;
        }
    }
    else
    {
        cout<<"This identifier is invalid"<<endl;
    }

}
