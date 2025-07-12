/*
    * Exercise 3 - Write a program that reads a value from the keyboard
    * value of tip and total bill, then calculates and prints the value of the tip
    * the total value of the bill with the tip included
    * and how much each person should pay if the bill is split between n people.
*/

#include <stdio.h>

int main() {
    float tip_percentage, total_bill, tip_value, total_with_tip, split_amount;
    int number_of_people;

    // Read the tip percentage and total bill from the keyboard
    printf("Digite a porcentagem da gorjeta (em %%): ");
    scanf("%f", &tip_percentage);
    printf("Digite o valor total da conta: ");
    scanf("%f", &total_bill);
    printf("Digite o numero de pessoas: ");
    scanf("%d", &number_of_people);

    // Calculate the value of the tip
    tip_value = (tip_percentage / 100) * total_bill;

    // Calculate the total value of the bill with the tip included
    total_with_tip = total_bill + tip_value;

    // Calculate how much each person should pay if the bill is split between two people
    split_amount = total_with_tip / number_of_people;

    // Print the results
    printf("Valor da gorjeta: R$%.2f\n", tip_value);
    printf("Valor total da conta com gorjeta: R$%.2f\n", total_with_tip);
    printf("Valor que cada pessoa deve pagar: R$%.2f\n", split_amount);

    return 0;
}