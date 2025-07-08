/*
    1. Write a function that takes two integers and returns their sum.
    2. Write a function that prints a personalized greeting.
    3. Write a function that returns the square of a number.
    4. Write a function that takes an integer and returns its factorial.
    5. Write a function that checks if a number is prime.
*/

#include <stdio.h>
#include <stdbool.h>
#include <locale.h> // For setting locale to Portuguese

/*
    Function Prototypes
    These functions are declared here to be used later in the code.
*/
int sum(int a, int b);
void greet(const char *name);
int square(int num);
unsigned long long factorial(int n);
bool is_prime(int n);


// Main function to demonstrate the above functions
int main() {
    setlocale(LC_ALL, "Portuguese"); // Set locale to Portuguese for proper formatting

    int a, b;
    printf("Digite dois números inteiros para somar: ");
    scanf("%d %d", &a, &b);
    printf("A soma de %d e %d é: %d\n", a, b, sum(a, b));

    char name[100];
    printf("Digite seu nome: ");
    scanf(" %[^\n]", name); // reads a string with spaces
    greet(name);

    int num;
    printf("Digite um número inteiro para calcular o quadrado: ");
    scanf("%d", &num);
    printf("O quadrado de %d é: %d\n", num, square(num));

    int fact_num;
    printf("Digite um número inteiro para calcular o fatorial: ");
    scanf("%d", &fact_num);
    printf("A fatoração de %d é: %llu\n", fact_num, factorial(fact_num));

    int prime_check;
    printf("Digite um número inteiro para verificar se é primo: ");
    scanf("%d", &prime_check);
    if (is_prime(prime_check)) {
        printf("%d é um número primo.\n", prime_check);
    } else {
        printf("%d não é um número primo.\n", prime_check);
    }

    return 0;
}

// Function to return the sum of two integers
int sum(int a, int b) {
    return a + b;
}

// Function to print a personalized greeting
void greet(const char *name) {
    printf("Hello, %s!\n", name);
}

// Function to return the square of a number
int square(int num) {
    return num * num;
}

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n < 0) {
        return 0; // Factorial is not defined for negative numbers
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to check if a number is prime
bool is_prime(int n) {
    if (n <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // Found a divisor, so it's not prime
        }
    }
    return true; // No divisors found, so it is prime
}
