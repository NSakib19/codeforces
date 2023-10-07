#include<iostream>
int main()
{
    int n,flag =0;
    std::cin>>n;
    int input[3];
    for(int i=0;i<n;i++)
    {
        std::cin>>input[0]>>input[1]>>input[2];
        if(input[0]+input[1]+input[2]>1)
            flag++;
    }
    std::cout<<flag;
}
