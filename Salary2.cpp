#include<iostream>
#include<string>
#include<cstdio>

using namespace std;
int main()
{
    string name;
    getline(cin,name);
    float salary,product,total;
    cin>>salary>>product;
    total = salary+product*.15;
    printf("TOTAL = R$ %.2f\n",total);
    return 0;
}
