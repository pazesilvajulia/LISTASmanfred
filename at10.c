// TERMINAR

//Faça uma função que leia um nome, converta o primeiro caractere deste nome para maiúscula.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int maiuscula(char nome[100], int tamstring){
    for(int i = 0; i < tamstring; i++){
        nome[i] = toupper(nome[i]);
    }
    
    printf("\n\nSeu nome com letras maiúsculas: %s", nome);
}

int main() {
    char nome[100];
    int tamstring = strlen(nome);
    
    printf("Digite seu nome com letras minúsculas: ");
    scanf("%s", &nome);
    
    maiuscula(nome, tamstring);
    
    return 0;
}