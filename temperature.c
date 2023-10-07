#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Temperature ");
    scanf("%d",&a);
    if(a < 0){printf("Freezing weather");}
    else if(0 <=a && a<=10) {
            printf("Very Cold weather");
        }
    else if(11 <=a && a<= 20) {
        printf("Cold weather");
        }
    else if(21 <=a &&a <=30) {
        printf("Normal in Temp");
        }
    else if(31 <=a && a<=40) {
        printf("Its Hot");
        }
    else if(a >40) {
        printf("It's Very Hot");
        }
    return 0;
}
