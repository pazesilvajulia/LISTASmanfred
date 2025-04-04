// Faça um programa que tenha uma função que leia as coordenadas de dois pontos e uma função que tenha essas coordenadas como parâmetro e retorne a distancia entre os pontos lidos. D= sqrt (sqr(x2-x1)+sqr(y2-y1))

#include <stdio.h>
#include <math.h>

float calcula(float x1, float y1, float x2, float y2) {
    float distancia;
    distancia = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    return distancia;
}

int main() {
    float x1, y1, x2, y2, resultado;

    printf("Digite o valor de x1: ");
    scanf("%f", &x1);

    printf("Digite o valor de y1: ");
    scanf("%f", &y1);

    printf("Digite o valor de x2: ");
    scanf("%f", &x2);

    printf("Digite o valor de y2: ");
    scanf("%f", &y2);

    resultado = calcula(x1, y1, x2, y2);

    printf("A distancia entre os dois pontos e: %.2f\n", resultado);

    return 0;
}