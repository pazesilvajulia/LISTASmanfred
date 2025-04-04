// Faça um programa que receba como parâmetros a linha, a coluna e uma mensagem. Escreva esta mensagem na linha e coluna fornecida.

#include <stdio.h>

int main() {
    char msg[300];
    int li, col;
    
    
    printf("Insira a linha desejada: ");
    scanf("%d", &li);
    printf("Insira a coluna desejada: ");
    scanf("%d", &col);
    getchar();
    printf("Digite uma mensagem: ");
    fgets(msg, sizeof(msg), stdin);  
    
    for(int i = 0; i <li; i ++){
        printf("\n");
    }
    
    for(int i = 0; i < col; i++){
        printf(" ");
    }
    
    printf("%s", msg);

    return 0;
}