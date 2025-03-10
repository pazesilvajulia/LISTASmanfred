//Construa um algoritmo que peça uma temperatura em graus Celsius(ºC), transforme e mostre na tela a temperatura em graus Farenheit(ºF).

#include <stdio.h>
#include <math.h>

int main() {
    float f, c;
    printf("Insira uma temperatura em Celsius (ºC): ");
    scanf("%f", &c);
    f = (c*1.8)+32;
    printf("Temperatura convertida para graus Fahrenheit (ºF): %0.2f", f);
    return 0;
}