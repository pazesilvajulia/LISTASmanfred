//Construa um algoritmo que peça 2 números inteiros e um número real. Calcule e mostre: 

//o produto do dobro do primeiro com metade do segundo. 

//a soma do triplo do primeiro com o terceiro. 

//o terceiro elevado ao cubo.

#include <stdio.h>
#include <math.h>

int main() {
    int i1, i2;
    float f3, q1, q2, q3;
    printf("Insira um número inteiro: ");
    scanf("%d", &i1);
    printf("Insira outro número inteiro: ");
    scanf("%d", &i2);
    printf("Agora, insira um número real: ");
    scanf("%f", &f3);
    q1 = (2*i1)*(i2/2);
    q2 = (3*i1)+f3;
    q3 = pow(f3, 3);
    printf("\nO produto do dobro do primeiro número com metade do segundo: %.2f\nA soma do triplo do primeiro número com o terceiro: %.2f\nO terceiro número elevado ao cubo: %.2f", q1, q2, q3);
    
    return 0;
}