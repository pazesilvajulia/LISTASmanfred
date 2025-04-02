#include <stdio.h>
#include <math.h>

int main() {
    float di, sal, saldesc;
    printf("Insira a quantidade de dias que você trabalhou neste mês: ");
    scanf("%f", &di);
    sal = 25*di;
    saldesc = sal*0.92;
    printf("Quantia líquida a ser paga (em reais): %0.2f", saldesc);
    return 0;
}