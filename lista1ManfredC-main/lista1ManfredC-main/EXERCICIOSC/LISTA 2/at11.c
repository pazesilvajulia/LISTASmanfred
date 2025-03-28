//. Faça um programa que implemente uma calculadora simples. O programa deve solicitar os operandos e o operador e mostrar a entrada e o resultado. Inclua verificadores de erro para operadores inválidos e tentativa de divisão por zero.

//a. O menu será como segue:

//[ 1 ] – Adição

//[ 2 ] – Subtração

//[ 3 ] – Multiplicação

//[ 4 ] – Divisão

//[ 5 ] – Fim

#include <stdio.h>

int main() {
    float n1, n2, op;
    int i = 0;
    
    while(i != 5){
        
        printf("\n\n[ 1 ] – Adição\n[ 2 ] – Subtração\n[ 3 ]\nMultiplicação\n[ 4 ] – Divisão\n[ 5 ] – Fim\n\n");
        printf("Insira um numero: ");
        scanf("%f", &n1);
        printf("Insira outro numero: ");
        scanf("%f", &n2);
        printf("Insira o numero da operacao desejada: ");
        scanf("%d", &i);
        
        if(i == 1){
            op = n1+n2;
            printf("RESULTADO - %.2f + %.2f = %.2f", n1, n2, op);
        }
        else if(i == 2){
            op = n1-n2;
            printf("RESULTADO - %.2f + %.2f = %.2f", n1, n2, op);
        }
        else if(i == 3){
            op = n1*n2;
            printf("RESULTADO - %.2f + %.2f = %.2f", n1, n2, op);
        }
        else if(i == 4){
            if(n1 == 0 | n2 == 0){
                printf("nao da pra dividir zeroooooooo.");
            }
            else{
                op = n1/n2;
                printf("DIVISAO - %.2f + %.2f = %.2f", n1, n2, op);
            }
            
        }
        
        
    }
    

    return 0;
}
