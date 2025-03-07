// Uma indústria produz três tipos de peças: parafuso, rosca e porca. Sabendo-se que o preço unitário de cada tipo é R$ 3,00, R$ 1,00 e R$ 0,50 e que é concedido um desconto de 2% por parafuso vendido,  2,5% por porca vendida e 2,7% por rosca vendida, elabore um programa que nos dê a resposta no seguinte formato: 

 

//Cliente: 9999 - xxxxxxxxxxxxxxxxxxxxxxx 

 

//Quant	Produto		Unit.	Bruto		 Líquido 

//99	Parafuso		3,00	999.99		  999.99 

//99	Rosca			1,00	999.99		  999.99 

//99	Porca			0,50	999.99		  999.99 

//Total		9999.99 

//INCOMPLETOOOOOOOOOOOO

#include <stdio.h>
#include <math.h>

int main() {
    int pa, ro, po;
    float vpa, vro, vpo, totpa;
    char nome[100];
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Insira a quantidade de parafusos desejada: ");
    scanf("%d", &pa);
    printf("Insira a quantidade de roscas desejada: ");
    scanf("%d", &ro);
    printf("Insira a quantidade de porcas desejada: ");
    scanf("%d", &po);
    
    totpa = pa*3;
    brupa =

    printf("Cliente: 01 - %s\n\nQuant. Produto     Unit.   Bruto    Líquido", &nome);
    printf("\n%d      Parafuso    3,00    %d     %.2f", pa, totpa, (3*0.97)*pa);

    return 0;
}

