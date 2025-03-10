//Faça um programa que peça um número e informe se o número é inteiro ou quebrado

#include <stdio.h>
#include <math.h>


int main() {
    float n;
    int aux;
    printf("Insira um numero: ");
    scanf("%f", &n);
    aux = n;
    
    if (n == aux){
        printf("O numero eh inteiro.");
        
    } else {
        printf("O numero eh quebrado.");

    }