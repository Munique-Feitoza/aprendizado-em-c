#include <stdio.h>

/*
    * Exercise 2: Write a program that reads five values from the keyboard one by one
    * and counts how many of these values are positive and how many are negative
*/

int main() {
    int i, value, positiveCount = 0, negativeCount = 0;

    for (i = 0; i < 5; i++) {
        printf("Insira o valor %d: ", i + 1);
        scanf("%d", &value);

        if (value > 0) {
            positiveCount++;
        } else if (value < 0) {
            negativeCount++;
        }
    }

    printf("Quantidade de valores positivos: %d\n", positiveCount);
    printf("Quantidade de valores negativos: %d\n", negativeCount);
    return 0;
}