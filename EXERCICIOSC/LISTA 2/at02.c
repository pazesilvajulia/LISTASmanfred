//Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo

#include <stdio.h>

int main() {
    float n;
    printf("Insira um numero: ");
    scanf("%f", &n);
    
    if (n>0) {
        printf("\nO valor inserido eh positivo.");
    } else {
        printf("\nO valor inserido eh negativo.");
    }
    return 0;
}