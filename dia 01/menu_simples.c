#include <stdio.h>      // Biblioteca padrão para entrada e saída
#include <stdlib.h>     // Biblioteca para uso de funções como system()
#include <string.h>     // Biblioteca para manipulação de strings (strcmp)

int main()
{
    char escolha[100];  // Variável para armazenar a opção digitada pelo usuário (como string)

    printf("\n Oi! Bem-vindo a C\n");

    // Início do laço do...while: ele garante que o menu seja exibido pelo menos uma vez
    do {
        // Impressão do menu de opções
        printf("\n__________________________\n\n");
        printf("1 - IDE\n");
        printf("2 - Compilador\n");
        printf("3 - Sintaxe\n");
        printf("4 - Sair\n");
        printf("\n__________________________\n\n");

        // Leitura da escolha do usuário
        scanf("%s", escolha);  // Aqui não é necessário usar & porque escolha é um array

        // Verificação da escolha usando strcmp, já que estamos lidando com strings
        if(strcmp(escolha, "1") == 0) {
            printf("\nA IDE usada para programar C é a Code::Blocks\n");
        }
        else if(strcmp(escolha, "2") == 0) {
            printf("\nO compilador usado para C é o GNU GCC Compiler\n");
        }
        else if(strcmp(escolha, "3") == 0) {
            printf("\nA sintaxe usada em C é desafiadora, mas poderosa!\n");
        }
        else if (strcmp(escolha, "4") == 0) {
            printf("\nSaindo...\n");
            system("pause");  // Para pausar o terminal antes de sair (Windows)
        }
        else {
            printf("Opção inválida!\n");
        }

    // Continua exibindo o menu até que o usuário digite "4"
    } while(strcmp(escolha, "4") != 0);

    return 0;
}
