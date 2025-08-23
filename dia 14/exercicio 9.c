#include <stdio.h>

/*
    * Exercise 9: Write a program that reads three numbers and checks if they can form a triangle
    * (the sum of any two sides must be greater than the third side)
    * If they can form a triangle, determine if it is equilateral, isosceles or scalene
    * If they cannot form a triangle, print "Cannot form a triangle"
*/


int main() {
    float a, b, c;

    printf("Insira três valores para os lados do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("O triângulo é equilátero.\n");
        } else if (a == b || b == c || a == c) {
            printf("O triângulo é isósceles.\n");
        } else {
            printf("O triângulo é escaleno.\n");
        }
    } else {
        printf("Não podem formar um triângulo.\n");
    }

    return 0;
}