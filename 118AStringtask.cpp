#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cin>> str;
    int n= str.length();

    /*for(int i=0; i<n; i++)
    {
        if(str[i]=='A' ||str[i]=='a' ||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u' )
        {
            str.erase(str.begin()+i);
        }
    }
    cout<<str<<endl;*/
    str.erase(   remove(str.begin(), str.end(), 'a') ,    str.end()   );
        str.erase(   remove(str.begin(), str.end(), 'A') ,    str.end()   );
    str.erase(   remove(str.begin(), str.end(), 'E') ,    str.end()   );
    str.erase(   remove(str.begin(), str.end(), 'e') ,    str.end()   );
    str.erase(   remove(str.begin(), str.end(), 'I') ,    str.end()   );
    str.erase(   remove(str.begin(), str.end(), 'i') ,    str.end()   );
    str.erase(   remove(str.begin(), str.end(), 'o') ,    str.end()   );
    str.erase(   remove(str.begin(), str.end(), 'O') ,    str.end()   );
    str.erase(   remove(str.begin(), str.end(), 'U') ,    str.end()   );
    str.erase(   remove(str.begin(), str.end(), 'u') ,    str.end()   );
    str.erase(   remove(str.begin(), str.end(), 'Y') ,    str.end()   );
    str.erase(   remove(str.begin(), str.end(), 'y') ,    str.end()   );


    for(int i=0; i<str.length(); i++)
    {
        cout<<"."<<char(tolower(str[i]));
    }
}
