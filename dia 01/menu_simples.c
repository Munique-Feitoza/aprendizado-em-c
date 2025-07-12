#include <stdio.h>      // Biblioteca padr�o para entrada e sa�da
#include <stdlib.h>     // Biblioteca para uso de fun��es como system()
#include <string.h>     // Biblioteca para manipula��o de strings (strcmp)

int main()
{
    char escolha[100];  // Vari�vel para armazenar a op��o digitada pelo usu�rio (como string)

    printf("\n Oi! Bem-vindo a C\n");

    // In�cio do la�o do...while: ele garante que o menu seja exibido pelo menos uma vez
    do {
        // Impress�o do menu de op��es
        printf("\n__________________________\n\n");
        printf("1 - IDE\n");
        printf("2 - Compilador\n");
        printf("3 - Sintaxe\n");
        printf("4 - Sair\n");
        printf("\n__________________________\n\n");

        // Leitura da escolha do usu�rio
        scanf("%s", escolha);  // Aqui n�o � necess�rio usar & porque escolha � um array

        // Verifica��o da escolha usando strcmp, j� que estamos lidando com strings
        if(strcmp(escolha, "1") == 0) {
            printf("\nA IDE usada para programar C � a Code::Blocks\n");
        }
        else if(strcmp(escolha, "2") == 0) {
            printf("\nO compilador usado para C � o GNU GCC Compiler\n");
        }
        else if(strcmp(escolha, "3") == 0) {
            printf("\nA sintaxe usada em C � desafiadora, mas poderosa!\n");
        }
        else if (strcmp(escolha, "4") == 0) {
            printf("\nSaindo...\n");
            system("pause");  // Para pausar o terminal antes de sair (Windows)
        }
        else {
            printf("Op��o inv�lida!\n");
        }

    // Continua exibindo o menu at� que o usu�rio digite "4"
    } while(strcmp(escolha, "4") != 0);

    return 0;
}
