#include <stdio.h>


int menu() {
    int op;
    printf("\n------------- MENU ---------------\n");
    printf("1 - Par ou ímpar\n");
    printf("2 - Positivo ou negativo\n");
    printf("3 - Sair\n");
    printf("Insira a opção desejada: ");
    scanf("%d", &op);
    return op;
}


void parimpar() {
    int num;
    printf("\nInsira um número para verificar se é par ou ímpar: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O número %d é par.\n", num);
    } else {
        printf("O número %d é ímpar.\n", num);
    }
}


void posneg() {
    int num;
    printf("\nInsira um número para verificar se é positivo ou negativo: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("O número %d é positivo.\n", num);
    } else if (num < 0) {
        printf("O número %d é negativo.\n", num);
    } else {
        printf("O número é zero.\n");
    }
}


int main() {
    int op;
    
    do {
        op = menu();  
        
        switch (op) {
            case 1:
                parimpar();
                break;
            case 2:
                posneg();
                break;
            case 3:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
        
    } while (op != 3);

    return 0;
}
