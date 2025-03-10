// Faça um programa que peça um número e imprima se o número é par ou ímpar

#include <stdio.h>
#include <math.h>


int main() {
    int n;
    printf("Insira um numero: ");
    scanf("%d", &n);
    
    if (n % 2 == 0) {
        printf("\nO valor inserido eh par.");
    } else {
        printf("\nO valor inserido eh impar.");
    }
    return 0;
}