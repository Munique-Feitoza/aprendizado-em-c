#include <stdio.h>

/*
    * Exercise 4: Write a program that calculates the IMC (Body Mass Index)
    * and informs the user if he is underweight, normal weight, overweight,
    * obesity or severe obesity
*/

int main() {
    float weight, height, imc;

    printf("Insira seu peso (kg): ");
    scanf("%f", &weight);
    printf("Insira sua altura (m): ");
    scanf("%f", &height);

    imc = weight / (height * height);

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Você está abaixo do peso.\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Você está com peso normal.\n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Você está com sobrepeso.\n");
    } else if (imc >= 30 && imc < 39.9) {
        printf("Você está com obesidade.\n");
    } else {
        printf("Você está com obesidade grave.\n");
    }

    return 0;
}