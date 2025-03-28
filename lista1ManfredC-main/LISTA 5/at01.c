#include <stdio.h>


int verificaParImpar(int numero) {
    return numero % 2; 
}

int main() {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if (verificaParImpar(numero) == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }
    
    return 0;
}