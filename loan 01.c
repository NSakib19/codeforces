#include<stdio.h>
int main()
{
    double loan_amount, interest_rate,number_of_years,total_amount,monthly_amount;
    printf("Enter loan amount ",loan_amount);
    scanf("%lf",&loan_amount);
    printf("Enter loan amount ",interest_rate);
    scanf("%lf",&interest_rate);
    printf("Enter loan amount ",number_of_years);
    scanf("%lf",&number_of_years);
    total_amount = loan_amount+(interest_rate*number_of_years)/100;
    monthly_amount= total_amount/number_of_years*12;
    printf("total_amount = %lf",total_amount);
    printf("monthly_amount = %lf",monthly_amount);
    return 0;
}
