#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const char *input;
int pos = 0;

// Função para obter o caractere atual
char lookahead() {
    return input[pos];
}

// Função para avançar se o caractere esperado for encontrado
void match(char expected) {
    if (lookahead() == expected) {
        pos++;
    } else {
        printf("Erro de sintaxe: esperado '%c' mas encontrou '%c'\n", expected, lookahead());
        exit(1);
    }
}

// E → T E'
void E();
void E_();
// T → F T'
void T();
void T_();
// F → (E) | id
void F();

void E() {
    T();
    E_();
}

void E_() {
    if (lookahead() == '+') {
        match('+');
        T();
        E_();
    }
    // ε (vazio): não faz nada
}

void T() {
    F();
    T_();
}

void T_() {
    if (lookahead() == '*') {
        match('*');
        F();
        T_();
    }
    // ε (vazio): não faz nada
}

void F() {
    if (lookahead() == '(') {
        match('(');
        E();
        match(')');
    } else if (lookahead() == 'i') {  // Representa "id"
        match('i');
    } else {
        printf("Erro de sintaxe: símbolo inesperado '%c'\n", lookahead());
        exit(1);
    }
}

int main() {
    char expr[100];
    printf("Digite uma expressão (use 'i' como identificador, ex: i+i*i): ");
    scanf("%s", expr);
    input = expr;

    E(); // Inicia a análise pela regra inicial E

    if (input[pos] == '\0') {
        printf("Expressão válida!\n");
    } else {
        printf("Erro: entrada não totalmente consumida, sobrou '%s'\n", &input[pos]);
    }

    return 0;
}
// Exemplo de uso:
// Entrada: i+i*i
// Entrada: i+i*i+
// Entrada: i+i*i+1
// Entrada: i+i*i(i+i)
// Entrada: i+i*i(i+i)*
// Entrada: i+i*i(i+i)*i
// Entrada: i+i*i(i+i)*i+
// Entrada: i+i*i(i+i)*i+1
// Entrada: i+i*i(i+i)*i+1*
// Entrada: i+i*i(i+i)*i+1*(i+i)
// Entrada: i+i*i(i+i)*i+1*(i+i)*
