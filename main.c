#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float mPayment(float price, float monthlyRate, float paymentsCount);

int main(){
    float price, downPayment, rate, numOfPayments;
    printf("Enter purchase price of a car, down payment, annual interest rate, and total number of payments: ");
    scanf("%f %f %f %f", &price, &downPayment, &rate, &numOfPayments);
    
    printf("Your monthly payment will be: $%.2f\n", mPayment(price - downPayment, rate / 1200, numOfPayments));
    return 0;
}

float mPayment(float price, float monthlyRate, float paymentsCount){
    return (monthlyRate * price) / (1 - pow(1 + monthlyRate, -paymentsCount));
}
