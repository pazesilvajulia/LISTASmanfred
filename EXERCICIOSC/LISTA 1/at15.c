// Elabore um programa para calcular a quantidade necessária de latas de tinta para pintar uma parede com X metros de largura por H metros de altura. Considere que o consumo de latas de tinta por metro quadrado é 3 litros e a quantidade de tinta por lata é 3,6 litros. 

#include <stdio.h>
#include <math.h>

int main() {
    float h, x, latas;
    printf("Insira a altura da parede (em metros): ");
    scanf("%f", &h);
    printf("Agora, insira a largura da parede (em metros): ");
    scanf("%f", &x);
    latas = ((h*x)*3)/3.6;
    printf("Quantidade de latas de tinta necessárias para pintar a parede: %.0f", latas);

    return 0;
}