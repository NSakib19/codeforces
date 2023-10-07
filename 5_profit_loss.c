/*
    Write a C program to calculate profit and loss on a transaction.
*/

#include<stdio.h>
int main(){

    //Declarations
    int buy, sell, profit_loss;

    //Input buy, Sell
    printf("Enter the Purchase price : ");
    scanf("%d", &buy);

    printf("Enter the Selling price : ");
    scanf("%d", &sell);

    //Conditions and Output
    if(sell > buy ){
        profit_loss = sell - buy;
        printf("You can booked your Profit amount : %d", profit_loss);
    }
    else if( buy > sell){
        profit_loss = buy - sell;
        printf("You can booked your Loss amount : %d", profit_loss);
    }
    else
        printf("No profit, No loss");

    printf("\n");


    return 0;




}
