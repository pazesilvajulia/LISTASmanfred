//Faça um programa onde o usuário possa escolher em um menu as seguintes opções de cálculo:

//a. Área Retângulo = base * altura

//b. Área Triângulo = base * altura/2

//c. Área do Círculo = 2 * pi * r * r

//d. Área do quadrado = lado * lado

//e. Área do trapézio = (lmaior + lmenor) * altura/2

//f. Sair

#include <stdio.h>

int main() {
    float b, h, r, l, lma, lme, conta;
    char op;
    
    while(op != 'f'){
        
        printf("\n\n----------------- CALCULADORA -----------------\n\na. Area Retangulo = base * altura\nb. Area Triangulo = base * altura/2\nc. Area do Circulo = 2 * pi * r * r\nd. Area do quadrado = lado * lado\ne. Area do trapezio = (lmaior + lmenor) * altura/2\n\nf. Sair\n\nInsira a opcao desejada: ");
        scanf("%c", & op);
        
        if(op == 'a'){
            printf("\nInsira a base: ");
            scanf("%f", &b);
            printf("Insira a altura: ");
            scanf("%f", &h);
            conta = b*h;
            printf("\n\nÁrea Retângulo = %.2f", conta);
        }
        else if(op == 'b'){
            printf("Insira a base: ");
            scanf("%f", &b);
            printf("Insira a altura: ");
            scanf("%f", &h);
            conta = (b*h)/2;
            printf("\n\nÁrea Triângulo = %.2f", conta);
        }
        else if(op == 'c'){
            printf("Insira o raio do círculo: ");
            scanf("%f", &r);
            conta = 2*3.14*r;
            printf("\n\nÁrea Círculo = %.2f", conta);
        }
        else if(op == 'd'){
            printf("Insira o tamanho do lado: ");
            scanf("%f", &l);
            conta = l*l;
            printf("\n\nÁrea Quadrado = %.2f", conta);
        }
        else if(op == 'e'){
            printf("Insira o lado maior: ");
            scanf("%f", &lma);
            printf("Insira o lado menor: ");
            scanf("%f", &lme);
            printf("Insira a altura: ");
            scanf("%f", &h);
            conta = (lma+lme)*h/2;
            printf("\n\nÁrea Triângulo = %.2f", conta);
        }
        

        
    }
    
    return 0;
    
}