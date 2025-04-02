//Faça uma função que desenhe linhas de caracteres na tela, a função receberá como argumento o tipo de caractere e o número de linhas que deverá imprimir

#include <stdio.h>

int desenhalinhas(char c, int linhas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < 30; j++) { 
            printf("%c", c);
        }
        printf("\n");
    }
}

int main() {
    int linhas;
    char c;
    
    printf("Digite o caractere: ");
    scanf("%c", &c);
    printf("Digite a quantidade de linhas desejadas: ");
    scanf("%d", &linhas);
    
    desenhalinhas(c, linhas);
    
    return 0;
}