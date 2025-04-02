// Faça um programa que leia uma palavra e execute a opção escolhida pelo usuário conforme o menu que deve ser mostrado na tela:

//a) - Todas as letras em maiúscula;

//b) - Todas as letras em minúscula;

//c) - Inverte palavra;

//d) - Tamanho da palavra;

//e) - Fim;

#include <stdio.h>
#include <string.h>
#include <ctype.h>


char menu() {
    char op;
    printf("\n--------------MENU--------------\n");
    printf("  a) - Todas as letras em maiúscula\n");
    printf("  b) - Todas as letras em minúscula\n");
    printf("  c) - Inverte palavra\n");
    printf("  d) - Tamanho da palavra\n");
    printf("  e) - Fim");
    printf("\n--------------------------------\n");
    printf("Insira a opcao desejada: ");
    scanf(" %c", &op);
    return op;
}

void maiuscula(void){
    char nome[100];
    
    printf("Digite seu nome com letras minúsculas: ");
    scanf(" %s", &nome);
    
    int tamstring = strlen(nome);
    
    for(int i = 0; i <= tamstring; i++){
        nome[i] = toupper(nome[i]);
    }
    
    printf("\n\nSeu nome com letras maiúsculas: %s", nome);
}

void minuscula(void){
    char nome[100];
    
    printf("Digite seu nome com letras maiusculas: ");
    scanf(" %s", &nome);
    
    int tamstring = strlen(nome);
    
    for(int i = 0; i <= tamstring; i++){
        nome[i] = tolower(nome[i]);
    }
    
    printf("\n\nSeu nome com letras minusculas: %s", nome);
}

void inverte(void){
    char palavra[100];
    
    printf("Digite uma palavra: ");
    scanf(" %s", &palavra);
    
    int tamstring = strlen(palavra);
    
    printf("Palavra invertida: ");
    for(int i = tamstring-1 ; i != -1; i--){
        printf("%c", palavra[i]);
    }

}

void tamanho(void){
    char palavra[100];
    
    printf("Digite uma palavra: ");
    scanf(" %s", &palavra);
    
    int tamstring = strlen(palavra);
    
    printf("Tamanho da palavra: %d letras", tamstring);
    

}

int main() {
    char op;
    
    do{
        op = menu();
        
        switch(op){
        case 'a':
            maiuscula();
            break;
        case 'b':
            minuscula();
            break;
        case 'c':
            inverte();
            break;
        case 'd':
            tamanho();
            break;
        case 'e':
            printf("Programa encerrado.");
            break;
        default: 
            printf("Opcao invalida. Tente novamente.\n");
            break;
        }
        
    }while(op!='e');
    
    return 0;
}
