//Faça um programa que tenha uma função que desenhe um retângulo usando os caracteres ‘+’ , ‘-’  e ‘| ‘. A função receberá a quantidade de linhas (<24) e a quantidade de colunas (<79) para imprimir o retângulo na tela.


#include <stdio.h>

void desenha(int col, int li) {
    for (int a = 0; a != 1; a++ ){
        printf("+");
        for (int b = 2; b != col; b++){
            printf("-");
        }
        
        printf("+");
    } // primeira linha
    printf("\n");
    
    for (int a = 0; a != li; a++ ){
        printf("|");
        for (int b = 2; b != col; b++){
            printf(" ");
        }
        
        printf("|");
        printf("\n");
    } //lado
    
    printf("\n");
    
    for (int a = 0; a != 1; a++ ){
        printf("+");
        for (int b = 2; b != col; b++){
            printf("-");
        }
        
        printf("+");
    } // ultima linha
}

int main() {
    int li, col;
    
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &li);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &col);
    
    if (li > 0 && li < 24 && col > 0 && col < 79){
        desenha(col, li);
    } else if (li < 0 || col < 0){
        printf("Voce inseriu um ou mais valores negativos. Por favor, tente novamente.");
    } else if ( li>= 24 || col >= 79){
        printf("A quantidade de linhas deve ser menor que 24, e a quantidade de colunas deve ser menor que 79. Por favor, tente novamente.");
    }
    
    
    return 0;
}