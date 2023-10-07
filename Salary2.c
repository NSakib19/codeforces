#include <stdio.h>

int main() {

   char name[100];
   float salary,product,total;
   scanf("%s",name);
   scanf("%.2f",&salary);
   scanf("%.2f",&product);
   total = salary+product*.15;
   printf("Total = R$ %.2f\n",total);
    return 0;
}
