#include <stdio.h>
#include <math.h>

int main() {
    float vh, h, sal;
    printf("Insira quanto você ganha por hora: ");
    scanf("%f", &vh);
    printf("Insira a quantidade de horas que você trabalhou neste mês: ");
    scanf("%f", &h);
    sal = vh*h;
    printf("Seu salário esse mês será: %f", sal);
    return 0;
}