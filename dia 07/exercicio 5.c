/*
    * Exercise 5 - Write a program that exchange conversation rates between
    * two currencies. The program should read the amount in the real currency,
    * the conversion rate to the dolar currency, and print the equivalent amount in the second currency.
*/

#include <stdio.h>

int main() {
    float amount_in_real, conversion_rate, amount_in_dollar;

    // Read the amount in real currency
    printf("Digite o valor em reais: ");
    scanf("%f", &amount_in_real);

    // Read the conversion rate to dollar currency
    printf("Digite a taxa de conversao para dolar: ");
    scanf("%f", &conversion_rate);

    // Calculate the equivalent amount in dollars
    amount_in_dollar = amount_in_real * conversion_rate;

    // Print the amount in real currency
    printf("Valor em reais: R$%.2f\n", amount_in_real);

    // Print the equivalent amount in dollars
    printf("Valor equivalente em dolares: $%.2f\n", amount_in_dollar);

    return 0;
}