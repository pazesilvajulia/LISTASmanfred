//Faça um programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N-Noturno. Imprima a mensagem Bom Dia!, Boa Tarde! ou Boa Noite! ou Valor Inválido!, conforme o caso.

#include <stdio.h>

int main() {
    char o;
    printf("\nM - matutino\nV - vespertino\nN - noturno\n\nQual turno voce estuda?: ");
    scanf("%c", &o);

    if(o == 'M' || o == 'm'){
        printf("Bom dia!");
    }
    else if(o == 'V' || o == 'v'){
        printf("Boa tarde!");
    }
    else if(o == 'N' || o == 'n'){
        printf("Boa noite!");
    } else{
        printf("Valor Inválido!");
    }
    
    return 0;
    
}