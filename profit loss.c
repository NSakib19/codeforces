#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the buying price\n");
    scanf("%d",&a);
    printf("Enter the selling price\n");
    scanf("%d",&b);

    if(b>a){c=b-a;
    printf("You can booked your profit amount : %d\n",c);
    }
    else{c=a-b;
    printf("You can booked your loss amount : %d\n",c);}
    return 0;

}
