#include <stdio.h>
#include <math.h>

int main() {
    float r;
    float a;
    
    printf("------ Calculadora de área do círculo ------\n\n");
    printf("Insira o raio do círculo em centímetros: ");
    scanf("%f", &r);
    a = 3.14*pow(r,2);
    printf("\nA área do círculo é de: %f", a);
    return 0;
}