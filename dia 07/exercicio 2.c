#include <stdio.h>

/*
    * Exercise 2: Write a program that a and b chance values
    * are read from the keyboard and then prints the values of a and b
    * without using a third variable.
*/

int main() {
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    // Swap values without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    return 0;
}