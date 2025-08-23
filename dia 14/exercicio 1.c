#include <stdio.h>

/*
    * Exercise 1: Write a program that reads three values from the keyboard
    * and then prints the most value and the least values among them
*/

int main() {
    int a, b, c, max, min;

    printf("Insira 3 valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find maximum value
    max = a;
    if (b > max) {
        max = b;
    } else if (c > max) {
        max = c;
    }

    // Find minimum value
    min = a;
    if (b < min) {
        min = b;
    } else if (c < min) {
        min = c;
    }

    printf("O maior valor é: %d\n", max);
    printf("O menor valor é: %d\n", min);
    return 0;
}