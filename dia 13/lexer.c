#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void analisar_lexico(const char *expressao) {
    int i = 0;
    char c;

    while ((c = expressao[i]) != '\0') {
        if (isspace(c)) {
            i++;
            continue;
        }

        if (isdigit(c)) {
            // Começo de um número
            char numero[32];
            int j = 0;

            while (isdigit(expressao[i])) {
                numero[j++] = expressao[i++];
            }
            numero[j] = '\0';
            printf("[NÚMERO: %s]\n", numero);
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            printf("[OPERADOR: %c]\n", c);
            i++;
        } else if (c == '(') {
            printf("[ABRE_PARENTESES: (]\n");
            i++;
        } else if (c == ')') {
            printf("[FECHA_PARENTESES: )]\n");
            i++;
        } else {
            printf("[ERRO: caractere inválido '%c']\n", c);
            i++;
        }
    }
}

int main() {
    char entrada[256];

    printf("Digite a expressão matemática:\n");
    fgets(entrada, sizeof(entrada), stdin);
    entrada[strcspn(entrada, "\n")] = '\0'; // Remover o \n do final

    analisar_lexico(entrada);

    return 0;
}
