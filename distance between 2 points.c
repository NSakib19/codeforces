#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,z;
    scanf("%lf %lf",&x1,&x2);
    scanf("%lf %lf",&y1,&y2);
    z=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("%.4lf\n",z);
    return 0;
}
