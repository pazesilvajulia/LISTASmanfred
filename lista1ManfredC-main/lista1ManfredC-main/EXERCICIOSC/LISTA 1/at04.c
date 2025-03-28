#include <stdio.h>
#include <math.h>

int main() {
    float m;
    float c;
    printf("Insira um valor em metros: ");
    scanf("%f", &m);
    c = m*100;
    printf("O valor inserido, convertido para centímetros, é: %f", c);

    return 0;
}