#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a,x,y,level,answer;
    cin>>a>>x>>y;
    if((x%(float(a/2))==0 && (y%a)==0) || a==0 || (a/2)<x)
    {
        cout<<"-1"<<endl;
    }
    else{
    level = int(y/a);
    if((a/2)>x)
    {
        answer = int(level/2)+level+1;
        cout<<answer<<endl;
    }
    else if(-(a/2)<x)
    {
        answer = int(level/2)+level;
        cout<<answer;
    }

    }
}
