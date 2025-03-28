///Construa um algoritmo que peça o salário bruto mensal de um funcionário, calcule e apresente os valores conforme modelo abaixo: 

 

//Salário Bruto		  : R$  

//(-) IR      (15%)	  : R$ 

//(-) INSS    (11%)	  : R$ 

//(-) Sindicato ( 3%) : R$ 

//Salário Liquido	  : R$ 


//Obs.: Descontos = IR + INSS + Sindicato 

//Salário Líquido = Salário Bruto – Descontos 

#include <stdio.h>
#include <math.h>

int main() {
    float salb, ir, inss, sindi, salli, descontos;
    
    printf("Insira seu salário bruto (sem descontos): ");
    scanf("%f", &salb);
    ir = (salb - (salb*0.85));
    inss = (salb - (salb*0.89));
    sindi = (salb - (salb*0.97)) ;
    descontos = ir + inss + sindi;
    salli = salb - descontos;
    
    printf("Salário Bruto        : R$ %.1f\n(-) IR      (15%)    : R$ %.1f\n(-) INSS    (11%)    : R$ %.1f\n(-)  Sindicato   (3%): R$ %.1f\nSalário líquido      : R$ %.1f", salb, ir, inss, sindi, salli  );

    return 0;
}