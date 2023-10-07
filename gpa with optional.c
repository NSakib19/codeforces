#include<stdio.h>
int main()
{
  float physics,chem,bio,hmath,ict,bangla,english,gpa;
  scanf("%f",&physics);
  scanf("%f",&chem);
  scanf("%f",&bio);
  scanf("%f",&hmath);
  scanf("%f",&ict);
  scanf("%f",&bangla);
  scanf("%f",&english);
  if(hmath>2)
  {
      hmath = hmath-2;
  }
  else
  {
    hmath = 0;
  }
  gpa=(physics+chem+bio+hmath+ict+bangla+english)/7;
  printf("%f",gpa);


}

