#include <stdio.h>
#include <math.h>
int main()
{
    double a,R,b;
    scanf("%lf",&R);
    b=3.14159;
    a=(4.0/3)*b*R*R*R;
    printf("VOLUME = %0.3lf\n",a);
    return 0;
}
