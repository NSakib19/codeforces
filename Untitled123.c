#include <stdio.h>
int main()
{
    char name[30];
    printf("Me :");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Machine : No! and no means NO.Period\n\n\n");// display string
    return 0;
}
