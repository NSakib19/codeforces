#include<stdio.h>
int main()
{
    int roll,phy,chem,cs,total,division;
    float percentage;
    char name[50];
    printf("Please Enter The Roll Number of the student =");
    scanf("%d",&roll);
    printf("Please Enter The Name of the student \n");
    scanf("%s",&name);
    printf("Physic");
    scanf("%d",&phy);
    printf("chemistry ");
    scanf("%d",&chem);
    printf("Computer Application ");
    scanf("%d",&cs);
    printf("Name of the student %s\n",name);
    printf("Roll of the student %d\n",roll);
    total=phy+chem+cs;
    printf("physic %d \n",phy);
    printf("chemistry %d \n",chem);
    printf("Computer Application %d \n",cs);
    printf("total marks = %d\n",total);
    percentage=total/3;
    printf("Percentage = %f\n",percentage);
    if(percentage>=60){printf("Division = First\n");}
    else if(percentage>=40){printf("Division =second\n"); }
    else{printf("Division =third\n");}
    return 0;
}
