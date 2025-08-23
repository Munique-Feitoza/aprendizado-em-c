#include <stdio.h>

/*
    * Exercise 3: Write a program that reads a number and checks if is divisible by 2, 3 or 5
    * or divisible by none of these
*/

int main() {
    int number;

    printf("Insira um número inteiro: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d é divisível por 2\n", number);
    } 
    if (number % 3 == 0) {
        printf("%d é divisível por 3\n", number);
    } 
    if (number % 5 == 0) {
        printf("%d é divisível por 5\n", number);
    } 
    if (number % 2 != 0 && number % 3 != 0 && number % 5 != 0) {
        printf("%d não é divisível por 2, 3 ou 5\n", number);
    }

    return 0;
}