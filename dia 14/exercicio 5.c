#include <stdio.h>

/*
    * Exercise 5: Write a program that reads a number and checks if is a month or not with switch case
    * If it is a month, print the name of the month, otherwise print "Invalid number"
*/

int main() {
    int month;

    printf("Insira um número entre 1 e 12: ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Março\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Maio\n");
            break;
        case 6:
            printf("Junho\n");
            break;
        case 7:
            printf("Julho\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Setembro\n");
            break;
        case 10:
            printf("Outubro\n");
            break;
        case 11:
            printf("Novembro\n");
            break;
        case 12:
            printf("Dezembro\n");
            break;
        default:
            printf("Número inválido! Não corresponde a nenhum mês.\n");
    }

    return 0;
}