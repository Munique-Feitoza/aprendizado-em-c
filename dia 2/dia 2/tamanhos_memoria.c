#include <stdio.h>
#include <stdlib.h>

/*
    Projeto: Tamanhos de Tipos em C
    Autora: Munique Feitoza
    Objetivo: Demonstrar que o tamanho ocupado em memória por uma variável
              depende do tipo e não do valor atribuído.
*/

int main()
{
    int numeroint;
    float numerofloat;
    double numerodouble;
    char caractere;

    printf("\n\n\tBem-vindo ao programa de tamanho dos tipos!\n");
    printf("\tDigite um número inteiro: \n");
    scanf("%d", &numeroint);

    printf("\tDigite um número real com menos de 6 dígitos após o ponto: \n");
    scanf("%f", &numerofloat);

    printf("\tDigite um número real com mais de 6 dígitos após o ponto: \n");
    scanf("%lf", &numerodouble);

    printf("\tDigite uma letra: \n");
    scanf(" %c", &caractere); // espaço antes do %c para consumir o ENTER anterior

    // Repetir duas vezes com diferentes valores (o usuário verá que nada muda em tamanho)
    for (int i = 1; i <= 2; i++) {
        printf("\n[%dª repetição]\n", i);
        printf("\tO inteiro %d ocupa %lu bytes de memória.\n", numeroint, sizeof(int));
        printf("\tO float %.2f ocupa %lu bytes de memória.\n", numerofloat, sizeof(float));
        printf("\tO double %.10lf ocupa %lu bytes de memória.\n", numerodouble, sizeof(double));
        printf("\tO caractere '%c' ocupa %lu bytes de memória.\n", caractere, sizeof(char));

        // Alterar valores entre as execuções (apenas visualmente)
        if (i == 1) {
            printf("\n\tDigite novos valores para comparar:\n");
            printf("\tDigite outro número inteiro: \n");
            scanf("%d", &numeroint);

            printf("\tDigite outro float: \n");
            scanf("%f", &numerofloat);

            printf("\tDigite outro double: \n");
            scanf("%lf", &numerodouble);

            printf("\tDigite outro caractere: \n");
            scanf(" %c", &caractere);
        }
    }

    printf("\n______________________________________________________________\n");
    printf("\n\t🔍 Mesmo mudando os valores, os tamanhos continuaram iguais!\n");
    printf("\t👉 Isso acontece porque o tamanho depende do tipo de dado, não do valor inserido.\n");
    printf("\n\tSaindo do programa...\n");

    system("pause"); // Para Windows, segura o terminal aberto
    return 0;
}
