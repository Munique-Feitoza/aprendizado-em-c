#include <stdio.h>     // Biblioteca padrão de entrada e saída (printf, scanf, etc.)
#include <stdlib.h>    // Biblioteca padrão (não está sendo usada aqui, mas comum em C)
#include <string.h>    // Biblioteca para manipulação de strings (strlen)

int main()
{
    // Cria um array de caracteres (string) chamado 'nome' com até 49 letras + '\0'
    char nome[50] = "A"; // Inicializa com "A" só para ter um valor padrão

    // Ponteiro que aponta para o início do array 'nome'
    char *ponteiro = nome;

    // Solicita que o usuário digite o nome
    printf("Digite o seu nome:\n");
    scanf("%49s", nome); // Lê até 49 caracteres (evita ultrapassar o limite do array)

    // Calcula o comprimento real do nome digitado
    int comprimento = strlen(nome);

    // Loop para percorrer cada caractere do nome
    for(int i = 0; i < comprimento; i++) {
        // Imprime o índice, a letra e o endereço de memória da letra
        printf("O indice %d recebeu a letra %c que está na memoria %p\n",
                i, *(nome + i), (ponteiro + i));
        // *(nome + i) → conteúdo da posição i
        // (ponteiro + i) → endereço da posição i
    };

    return 0; // Fim do programa
}
