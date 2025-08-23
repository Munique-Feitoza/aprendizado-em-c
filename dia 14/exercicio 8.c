#include <stdio.h>

/*
    * Exercise 8: Write a program that give a option to the user to choose which type of median he wants to calculate
    * (arithmetic, weighted or geometric) and then read the necessary values to calculate and show the result
*/

int main() {
    int choice;
    float a, b, c, result;

    printf("Escolha o tipo de média a calcular:\n");
    printf("1. Média Aritmética\n");
    printf("2. Média Ponderada\n");
    printf("3. Média Geométrica\n");
    printf("Insira sua escolha (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Insira três valores para calcular a média aritmética: ");
            scanf("%f %f %f", &a, &b, &c);
            result = (a + b + c) / 3;
            printf("Média Aritmética: %.2f\n", result);
            break;
        case 2:
            printf("Insira três valores e seus respectivos pesos (valor peso): ");
            scanf("%f %f %f %f %f %f", &a, &b, &c, &a, &b, &c);
            result = (a * a + b * b + c * c) / (a + b + c);
            printf("Média Ponderada: %.2f\n", result);
            break;
        case 3:
            printf("Insira três valores para calcular a média geométrica: ");
            scanf("%f %f %f", &a, &b, &c);
            result = cbrt(a * b * c);
            printf("Média Geométrica: %.2f\n", result);
            break;
        default:
            printf("Escolha inválida! Por favor, insira um número entre 1 e 3.\n");
    }

    return 0;
}