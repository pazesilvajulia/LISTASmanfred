// A função para saber se o número é par ou ímpar retornará 0(zero) se o número for par e 1 se for ímpar. A função para saber se o número e positivo ou negativo retornara 1 se o número for positivo, e -1 se for negativo

#include <stdio.h>


int menu() {
    int op;
    printf("\n--------------MENU--------------\n");
    printf("     1 - Par ou Ímpar\n");
    printf("     2 - Positivo ou Negativo\n");
    printf("     3 - Sair\n");
    printf("--------------------------------\n");
    printf("Insira a opção desejada: ");
    scanf("%d", &op);
    return op;
}


int parimpar(int num) {
    return (num % 2 == 0) ? 0 : 1;
}


int posneg(int num) {
    return (num >= 0) ? 1 : -1;
}

int main() {
    int op, numero;
    
    do {
        op = menu();
        
        switch (op) {
            case 1:
                printf("Digite um número: ");
                scanf("%d", &numero);
                if (parimpar(numero) == 0)
                    printf("O número %d é par.\n", numero);
                else
                    printf("O número %d é ímpar.\n", numero);
                break;
            
            case 2:
                printf("Digite um número: ");
                scanf("%d", &numero);
                if (posneg(numero) == 1)
                    printf("O número %d é positivo.\n", numero);
                else
                    printf("O número %d é negativo.\n", numero);
                break;
            
            case 3:
                printf("Programa encerrado.\n");
                break;
            
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (op != 3);
    
    return 0;
}
