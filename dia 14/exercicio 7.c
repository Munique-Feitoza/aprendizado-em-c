#include <stdio.h>

/*
    * Exercise 7: Write a program that reads a number of month and show the number of days in that month
*/

int main() {
    int month;

    printf("Insira um número entre 1 e 12: ");
    scanf("%d", &month);

    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            printf("Este mês tem 31 dias.\n");
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            printf("Este mês tem 30 dias.\n");
            break;
        case 2: // February
            printf("Este mês tem 28 ou 29 dias.\n");
            break;
        default:
            printf("Número inválido! Não corresponde a nenhum mês.\n");
    }

    return 0;
}