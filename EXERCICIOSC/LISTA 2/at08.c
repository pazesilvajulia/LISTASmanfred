//Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente.

// TUDO ERRADO

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3;
    
    printf("Insira um numero inteiro:");
    scanf("%d",&n1);
    printf("Insira outro numero inteiro:");
    scanf("%d",&n2);
    printf("Insira mais um numero inteiro:");
    scanf("%d",&n3);
    
    if(n1>n2 || n2>n3){
        printf("Ordem crescente:\n%d %d %d", n1, n3, n2);
    }
    else if(n1>n2 || n2<n3) {
        printf("Ordem crescente:\n%d %d %d", n2, n1, n3);
    }
    else if(n2>n1 || n1>n3) {
        printf("Ordem crescente:\n%d %d %d", n3, n1, n2);
    }
    else if(n2>n1 || n1<n3) {
        printf("Ordem crescente:\n%d %d %d", n1, n2, n3);
    }
    else if(n3>n1 || n1>n2) {
        printf("Ordem crescente:\n%d %d %d", n2, n1, n3);
    }
    else if(n3>n1 || n1<n2) {
        printf("Ordem crescente:\n%d %d %d", n3, n2, n1);
    }
    return 0;
}