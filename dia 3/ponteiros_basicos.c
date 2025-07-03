#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10;       // variável comum
    int *p;           // ponteiro para inteiro

    p = &x;           // ponteiro recebe o endereço de x

    printf("Valor de x: %d\n", x);
    printf("Endereço de x (&x): %p\n", &x);
    printf("Valor armazenado em p (endereço de x): %p\n", p);
    printf("Valor apontado por p (*p): %d\n", *p);  // acessa o valor no endereço

    // modificando x através do ponteiro
    *p = 20;

    printf("\nApós modificar *p = 20:\n");
    printf("Valor de x agora: %d\n", x);
    printf("Valor apontado por p agora: %d\n", *p);

    return 0;
}
