//Faça um programa que peça dois números e imprima o maior deles.

#include <stdio.h>

int main() {
    int n1, n2;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n1);
    printf("Insira outro numero inteiro: ");
    scanf("%d", &n2);
    
    if (n1>n2) {
        printf("O maior numero: %d", n1);
        
    } else {
        printf("O maior numero: %d", n2);
    }
    return 0;
}