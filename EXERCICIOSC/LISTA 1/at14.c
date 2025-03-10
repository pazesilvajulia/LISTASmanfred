// Uma determinada empresa vende uma máquina que possui seis motores. Um de 20 CV, dois de 1 CV, e três de 5 CV, que custam 1500, 300 e 600 reais respectivamente cada motor. Existe a necessidade de saber quantos motores deverão ser comprados de cada modelo e quanto custará esta compra. Para isto elabore um programa que:  

// Pergunte quantas máquinas serão vendidas;  

// Calcule e apresente na tela a quantidade de motores que deverão ser comprados de cada modelo;  

// Calcule e apresente na tela o custo total por máquina, o custo por tipo de motor e o custo total da compra. 

#include <stdio.h>
#include <math.h>

int main() {
    int qmaq, t20 = 1, t1 = 2, t5 = 3, v20 = 1500, v1 = 300, v5 = 600, vf20, vf1, vf5, unidmaq;
    
    printf("Quantas máquinas serão vendidas?: ");
    scanf("%d", &qmaq);
    vf20 = (t20*qmaq)*v20;
    vf1 = (t1*qmaq)*v1;
    vf5 = (t5*qmaq)*v5;
    unidmaq = v20 + (2*v1) + (3*v5);
    
    printf("Total motores 20CV: %d\nTotal motores 1CV: %d\nTotal motores 5CV: %d\n\nCusto total da compra: %d\nCusto motores 20CV: %d\nCusto motores 1CV: %d\nCusto motores 5CV: %d\nCusto total por máquina: %d", (t20*qmaq), (t1*qmaq), (t5*qmaq), (vf20+vf5+vf1), vf20, vf1, vf5, unidmaq);
    
    return 0;
}
