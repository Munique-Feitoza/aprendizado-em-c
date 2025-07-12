/*
    * Exercise 4 - Write a program that calculates how many a children recives
    * in a month, considering that he recives 1 real in the first day,
    * 2 reais in the second day, 4 reais in the third day, and
    * so on, doubling the value each day.
    * The program should read the number of days from the keyboard and print the total amount received
*/

#include <stdio.h>

int main() {
    int days;
    long long total_amount = 0; // Use long long to handle large values
    long long daily_amount = 1; // Start with 1 cent on the first day

    // Read the number of days from the keyboard
    printf("Digite o numero de dias: ");
    scanf("%d", &days);

    // Calculate the total amount received over the specified number of days
    for (int i = 0; i < days; i++) {
        total_amount += daily_amount;
        daily_amount *= 2; // Double the amount for the next day
    }

    // Print the total amount received in cents
    printf("Total recebido em %d dias: %lld reais\n", days, total_amount);

    return 0;
}