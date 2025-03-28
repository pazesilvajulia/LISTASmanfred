// Uma indústria produz três tipos de peças: parafuso, rosca e porca. Sabendo-se que o preço unitário de cada tipo é R$ 3,00, R$ 1,00 e R$ 0,50 e que é concedido um desconto de 2% por parafuso vendido,  2,5% por porca vendida e 2,7% por rosca vendida, elabore um programa que nos dê a resposta no seguinte formato: 

 

//Cliente: 9999 - xxxxxxxxxxxxxxxxxxxxxxx 

 

//Quant	Produto		Unit.	Bruto		 Líquido 

//99	Parafuso		3,00	999.99		  999.99 

//99	Rosca			1,00	999.99		  999.99 

//99	Porca			0,50	999.99		  999.99 

//Total		9999.99 

#include <stdio.h>
#include <math.h>

int main() {
    int pa, ro, po;
    float brupa, liqpa, brupo, liqpo, bruro, liqro;
    char nome[100];
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Insira a quantidade de parafusos desejada: ");
    scanf("%d", &pa);
    printf("Insira a quantidade de roscas desejada: ");
    scanf("%d", &ro);
    printf("Insira a quantidade de porcas desejada: ");
    scanf("%d", &po);
    
    brupa = pa*3;
    liqpa = brupa*0.98;

    liqro = ro-(ro*0.027);
    
    brupo = po*0.5;
    liqpo = brupo*0.975;

    printf("\n\nCliente: 01 - %s\n\nQuant. Produto     Unit.   Bruto    Líquido", &nome);
    printf("\n%d      Parafuso    3,00    %.2f     %.2f", pa, brupa, liqpa);
    printf("\n\n%d      Rosca       1,00    %d      %.2f", ro, ro, liqro);
    printf("\n\n%d      Porca       0,50    %.2f     %.2f", po, brupo, liqpo);

    return 0;