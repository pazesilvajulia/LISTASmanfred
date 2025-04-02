//Construa um algoritmo que peça a temperatura em graus Farenheit(ºF), transforme e mostre na tela a temperatura em graus Celsius(ºC). C=5*(F-32)/9}

#include <stdio.h>
#include <math.h>

int main() {
    float f, c;
    printf("Insira uma temperatura em Fahrenheit (ºF): ");
    scanf("%f", &f);
    c = (5*(f-32))/9;
    printf("Temperatura convertida para graus Celsius (ºC): %0.2f", c);
    return 0;
}