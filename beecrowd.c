#include <stdio.h>

int main() {

    int t,k;

    scanf("%d",&t);
    k =t;
    int arr[t];
    while(--t){
        scanf("%d",arr[t]);
    }
    while(--k){
        if(arr[k]>2015)
        {
            printf("%d A.C\n",arr[k]-2016);
        }
        else{

            printf("%d D.C\n",arr[k]-2016);
        }

    }

    return 0;
}
