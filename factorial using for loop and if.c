#include <stdio.h>
int main()
 {
int n, i,factorial = 1;
printf("Enter a number: ");
scanf("%d",&n);
if (n < 0)
printf("number doesn't exist.");
 else
   {
       for(i=1; i<=n; ++i)
         {
            factorial=factorial*i;
          }
      printf("Factorial of %d = %d", n, factorial);
    }
return 0;
}

