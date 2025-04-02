//Faça um programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda,etc.), se digitar outro valor deve aparecer valor inválido.

#include <stdio.h>

int main() {
    int n;
    printf("\nDigite um numero inteiro para receber o dia da semana correspondente: ");
    scanf("%d", &n);

    if(n == 1){
        printf("\nDomingo!");
    }
    else if(n == 2){
        printf("\nSegunda!");
    }
    else if(n == 3){
        printf("\nTerca!");
    } 
    else if(n == 4){
        printf("\nQuarta!");
    }
    else if(n == 5){
        printf("\nQuinta!");
    }
    else if(n == 6){
        printf("\nSexta!");
    }
    else if(n == 7){
        printf("\nSabado!");
    } else{
        printf("Valor invalido.");
    }
    
    return 0;
    
}