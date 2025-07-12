#include <stdio.h>

/*
    * Exercise 1: Write a program that a and b chance values
    * are read from the keyboard and then prints the values of a and b
*/


int main() {
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    return 0;
}