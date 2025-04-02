//Faça um programa que tenha um menu de conversão de R$ para US$ e US$ para R$, cada conversão devera ter uma função que receba o valor e retorne o valor convertido


#include <stdio.h>

void dolarreal(float v, float vc) {
    vc = v * 5.73;
    printf("O valor inserido convertido para reais fica: R$%.2f!", vc);
}

void realdolar(float v, float vc) {
    vc = v / 5.73;
    printf("O valor inserido convertido para dolares fica: US$%.2f!", vc);
}

int main() {
    int o;
    float v, vc;
    
    printf("------------CONVERSOR DE MOEDAS------------\n\n               1 - DOLAR\n               2 - REAL\n\n-------------------------------------------\n\nSelecione a moeda que sera convertida: ");
    scanf("%d", &o);
    
    if(o == 1 || o == 2){
        printf("Insira o valor para ser convertido: ");
        scanf("%f", &v);
        
        if (v > 0){
            if(o == 1){
        dolarreal(v, vc);
    } else if(o == 2){
        realdolar(v, vc);
    } 
        } else{
            printf("Valor invalido.");
        }
    } else{
            printf("Valor invalido.");
        }

    
    
    
    return 0;
}