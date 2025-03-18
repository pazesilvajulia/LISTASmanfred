// Faça um programa que peça um número e se este número for par, transforme-o em ímpar e vice-versa

#include <stdio.h>
#include <math.h>


int main() {
    int n;
    printf("Insira um numero: ");
    scanf("%d", &n);
    
    if (n % 2 == 0) {
        printf("\nO valor inserido eh par. Mas agora vai ser imparkkkkkkkkkk: %d", n+1);
    } else {
        printf("\nO valor inserido eh impar. Mas agora vai ser parkkkkkkkkkk: %d", n+1);
    }
    return 0;
}