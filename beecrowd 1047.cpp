#include<iostream>

using namespace std;

int main()
{
    int sh,sm,eh,em;
    int hour =0,minute =0;
    cin>>sh>>sm>>eh>>em;
    hour = eh-sh;
    minute = em - sm;
    if(hour<0){
        hour = 24 + hour;
        if(minute<0){

            minute = 60 + minute;
            hour--;
        }
    }
    if(hour == 0){
        if(minute<0){

            minute = 60 + minute;
            hour = 23;
        }
    }
    if(hour>0){
        if(minute<0){

            minute = 60 + minute;
            hour--;
        }
    }

    if(sh == eh && sm == em)
    {
        hour =24;
        minute =0;
    }

    //cout<<hour<<" "<<minute<<endl;
    cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
}

