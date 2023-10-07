#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int k=n;
    while(n--){
        cin>>arr[n];
    }
    while(k--){
        if(arr[k]>2015)
        {
            printf("%d A.C\n",arr[k]-2016);
        }
        else{

            printf("%d D.C\n",arr[k]-2016);
        }

    }

}
