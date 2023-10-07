#include <stdio.h>
#include <math.h>

int main()
{

    double radius;
    double surface_area, volume,pi;

    printf("Enter radius of the sphere : \n");
    scanf("%lf", &radius);
    pi = 3.14159;
    surface_area =  4 * pi * radius * radius;
    volume = (4.0/3) * pi * radius * radius * radius;
    printf("Surface area of sphere is: %.3lf", surface_area);
    printf("\n Volume of sphere is : %.3lf", volume);
    return 0;
}
