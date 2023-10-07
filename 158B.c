#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int k[n];
    int count =0;
    int j =n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&k[i]);

    }
    for(int i =0;i<n;i++)
    {
        if(k[i]==4)
            count++;
        else if(k[i]==3)
        {
            for(j;j<=n;j--)
                if(k[j]==1)
            {
                n=j;
                count++;
            }
        }
        else
            count = count + (n-j);
    }
    printf("%d",count);

}
