#include <stdio.h>

/*
    * Exercise 6: Write a program that reads a string and separates the vowels and consonants
*/

int main() {
    char str[100];
    int i, vowelsCount = 0, consonantsCount = 0;

    printf("Insira uma string (máximo 99 caracteres): ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) { // Check if it's a letter
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowelsCount++;
            } else {
                consonantsCount++;
            }
        }
    }

    printf("Quantidade de vogais: %d\n", vowelsCount);
    printf("Quantidade de consoantes: %d\n", consonantsCount);
    return 0;
}