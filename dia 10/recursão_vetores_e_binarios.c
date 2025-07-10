#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*
    * dia 10.c
    * Este programa demonstra o uso de recursão para manipular arrays.
    * Ele inclui funções para somar elementos, encontrar o máximo, inverter o array,
    * imprimir o array e converter um número decimal em binário.
    *
    * Autor: [Munique Feitoza]
    * Data: [10/07/2025]
*/

// ----------- Function Prototypes -----------

// Function to recursively sum elements of an array
int sumArray(int arr[], int size);

// Function to recursively find the maximum element in an array
int maxElement(int arr[], int size);

// Function to recursively reverse the array
void reverseArray(int arr[], int start, int end);

// Function to print an array
void printArray(int arr[], int size);

// Helper function to read values into an array
void readArray(int arr[], int size);

// Function change decimal for binary
void decimalToBinary(int n, int binary[]);

// ----------- Main Function -----------

int main() {
    setlocale(LC_ALL, "Portuguese");

    int size;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &size);

    int vetor[size];

    printf("Digite os %d elementos do vetor:\n", size);
    readArray(vetor, size);

    printf("\nElementos inseridos: ");
    printArray(vetor, size);

    printf("\nSoma dos elementos: %d\n", sumArray(vetor, size));
    printf("Maior elemento do vetor: %d\n", maxElement(vetor, size));

    reverseArray(vetor, 0, size - 1);
    printf("Vetor invertido: ");
    printArray(vetor, size);

    int binary[32] = {0}; // Assuming a maximum of 32 bits for binary representation
    int decimal;
    printf("\nDigite um numero decimal para converter em binario: ");
    scanf("%d", &decimal);
    decimalToBinary(decimal, binary);
    printf("Representacao binaria de %d: \n", decimal);
    for (int i = 0; i < 32; i++) {
        printf("%d", binary[i]);
    }

    return 0;
}

// ----------- Function Implementations -----------

void readArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sumArray(int arr[], int size) {
    if (size == 0) return 0;
    return arr[size - 1] + sumArray(arr, size - 1);
}

int maxElement(int arr[], int size) {
    if (size == 1) return arr[0];

    int max_rest = maxElement(arr, size - 1);
    return (arr[size - 1] > max_rest) ? arr[size - 1] : max_rest;
}

void reverseArray(int arr[], int start, int end) {
    if (start >= end) return;

    // Swap the values
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr, start + 1, end - 1);
}

void decimalToBinary(int n, int binary[]) {
    if (n == 0) return;

    decimalToBinary(n / 2, binary);
    binary[n % 2] = 1;
}
