/*
    * Exercise 6: Write a program that reads a second
    * and prints the equivalent time in hours, minutes, and seconds.
*/

#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // Read the total number of seconds from the keyboard
    printf("Digite o numero de segundos: ");
    scanf("%d", &total_seconds);

    // Calculate hours, minutes, and seconds
    hours = total_seconds / 3600; // 1 hour = 3600 seconds
    total_seconds %= 3600; // Remaining seconds after extracting hours
    minutes = total_seconds / 60; // 1 minute = 60 seconds
    seconds = total_seconds % 60; // Remaining seconds after extracting minutes

    // Print the equivalent time in hours, minutes, and seconds
    printf("Tempo equivalente: %d horas, %d minutos e %d segundos\n", hours, minutes, seconds);

    return 0;
}