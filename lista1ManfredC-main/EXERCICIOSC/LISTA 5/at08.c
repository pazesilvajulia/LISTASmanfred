//Faça uma função que receba como argumento os valores dos lados de um triângulo, a função deverá retornar 0 se triângulo for equilátero, 1 se for isósceles ou 2 se for escaleno.

#include <stdio.h>

int verificalados(float l1, float l2, float l3){
    if(l1 == l2 && l2 == l3){
        printf("0. Triângulo equilátero.");
    } else if(l1 == l2 && l2 != l3){
        printf("1. Triângulo isósceles.");
    }else if(l1 != l2 && l2 != l3 && l3 != l1){
        printf("2. Triângulo escaleno.");
    }
}

int main() {
    int i = 1;
    float l1, l2, l3;
    
    printf("\n\nInsira o valor de um dos lados do triângulo: ");
    scanf("%f", &l1);
    printf("\nInsira o valor do outro lado: ");
    scanf("%f", &l2);
    printf("\nInsira o valor do último lado: ");
    scanf("%f", &l3);
    
    verificalados(l1, l2, l3);
   
    return 0;
}