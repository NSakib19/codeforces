#include<stdio.h>
int main()
{
    float physics,chem,bio,hmath,gpa;
    scanf("%f",&physics);
    scanf("%f",&chem);
    scanf("%f",&bio);
    scanf("%f",&hmath);
    gpa=(physics+chem+bio+hmath)/4;
    printf("%f",gpa);
}
