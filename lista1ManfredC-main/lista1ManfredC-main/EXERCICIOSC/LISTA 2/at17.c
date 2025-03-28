//Faça um programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem formar um triângulo, ou seja, a soma de dois lados não pode ser menor que o lado restante. Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.

#include <stdio.h>

int main() {
    float l1, l2, l3;
    printf("Insira o valor do lado 1 do triângulo: ");
    scanf("%f", &l1);
    printf("Insira o valor do lado 2 do triângulo: ");
    scanf("%f", &l2);
    printf("Insira o valor do lado 3 do triângulo: ");
    scanf("%f", &l3);
    
    if(l1+l2 < l3){
        printf("Não é possível formar um triângulo com esses valores.");
    }
    else if(l1 == l2 && l2 == l3){
        printf("O triângulo é equilátero.");
        
    }
    else if(l1 == l2 && l2 != l3 || l2 == l3 && l3 != l1 || l1 == l3 && l2 != l3) {
        printf("O triângulo é isósceles.");
    }
    else if(l1 != l2 || l2 != l3 || l3 != l1) {
        printf("O triângulo é escaleno.");
    }
        
    return 0;
}