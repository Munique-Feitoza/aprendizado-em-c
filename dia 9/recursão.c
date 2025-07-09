#include <stdio.h>
#include <locale.h>

/*
 * Function Prototypes
 * These declarations inform the compiler about the functions used later in the code.
 */
void printAscending(int x);
void printDescending(int x);

/*
 * Main function to run both recursive print functions
 */
int main() {
    // Set locale to Portuguese for proper number formatting
    setlocale(LC_ALL, "Portuguese");
    int number;

    printf("Digite um número positivo: ");
    scanf("%d", &number);

    printf("\nImprimindo em ordem crescente usando recursão:\n");
    printAscending(number);

    printf("\n\nImprimindo em ordem decrescente usando recursão:\n");
    printDescending(number);
    printf("\n\n");

    return 0;
}

/*
 * Recursive function that prints numbers from 1 to x (ascending order).
 * Calls itself before printing — demonstrating post-order recursion.
 */
void printAscending(int x) {
    if (x == 0) {
        return;
    }
    printAscending(x - 1);
    printf("%d ", x);
}

/*
 * Recursive function that prints numbers from x to 1 (descending order).
 * Prints first, then calls itself — demonstrating pre-order recursion.
 */
void printDescending(int x) {
    if (x == 0) {
        return;
    }
    printf("%d ", x);
    printDescending(x - 1);
}
