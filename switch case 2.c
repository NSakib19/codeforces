#include<stdio.h>
int main()
{
    int temperature;
    scanf("%d",&temperature);
    switch (temperature)
    {
    case temperature<=40:
        printf("hot");
        break;
    case temperature>=40:
        printf("Tolerable");
        break ;

    default :
        printf("nothing");
    }
    return 0;
}
