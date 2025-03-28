//Escreva uma função que receba como argumento o ano e retorne 1 se for ano bissexto ou 0 se não for um ano bissexto.

#include <stdio.h>


int anobissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;
} else {
    return 0;
    }
}

int main() {
    int ano;
    
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    if (anobissexto(ano) == 0) {
        printf("O ano %d nao é bissexto.\n", ano);
    } else if (anobissexto(ano) == 1){
        printf("O ano %d é bissexto.\n", ano);
    }
    
    return 0;
}