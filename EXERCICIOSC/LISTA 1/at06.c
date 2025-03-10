#include <stdio.h>
#include <math.h>

int main() {
    float b;
    float h;
    float a;
    printf("Insira o valor do lado do quadrado, em cm: ");
    scanf("%f", &b);
    a = (2*b)*2;
    printf("Dobro do valor da área: %f", a);

    return 0;
}