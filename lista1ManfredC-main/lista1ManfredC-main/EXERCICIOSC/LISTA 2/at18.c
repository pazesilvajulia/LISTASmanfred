//Faça um programa que calcule uma equação do 2o. grau, na forma x2+bx+c. O programa deve fazer todas as consistências de dados e informar caso o usuário entre com dados errados. Deve ainda informar se o delta é positivo ou negativo, e os valores de X quando existirem

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, r1, r2;
    printf("Insira o valor de A: ");
    scanf("%f", &a);
    printf("Insira o valor de B: ");
    scanf("%f", &b);
    printf("Insira o valor de C: ");
    scanf("%f", &c);
    
    delta = pow(b,2)-4*a*c;
    
    if (delta > 0){
        r1 = (-b+(sqrt(delta))/2*a);
        r2 = (-b-(sqrt(delta))/2*a);
        printf("Delta é positivo. A equação tem duas raízes reais e distintas, que são %.1f, e %.1f", r1, r2);

    }
    else if (delta == 0){
        r1 = (-b+(sqrt(delta))/2*a);
        printf("Delta é igual a zero. A equação tem uma raíz real dupla, que é %.1f", r1);
        
    }
    else if (delta < 0){
        printf("A equação não possui raízes reais, pois delta é negativo: %f", delta);
    }
    
    return 0;
}