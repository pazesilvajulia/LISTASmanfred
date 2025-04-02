#include <stdio.h>

int main() {
    int ano;
    printf("Digite um número correspondente a um ano: ");
    scanf("%d", &ano);
    
    if(ano%4 == 0){
        if(ano%100 == 0){
            if(ano%400 == 0){
                printf("O ano inserido é bissexto!");
            } else{
                printf("O ano não é bissexto.");
            }
        } else{
            printf("O ano não é bissexto.");
        }
    } else{
        printf("O ano não é bissexto.");
    }
    
    return 0;
}