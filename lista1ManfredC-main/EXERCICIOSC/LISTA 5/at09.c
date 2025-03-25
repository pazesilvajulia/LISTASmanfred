// Faça uma função que leia um nome, converta o primeiro caractere deste nome para maiúscula.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int maiuscula(char nome[100]){
    nome[0] = toupper(nome[0]);
    
    printf("\n\nSeu nome com a primeira letra maiúscula: %s", nome);
}

int main() {
    char nome[100];
    
    printf("Digite seu primeiro nome com letras minúsculas: ");
    scanf("%s", &nome);
    
    maiuscula(nome);
    
    return 0;
}