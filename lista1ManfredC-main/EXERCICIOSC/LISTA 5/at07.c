// Fazer um programa que possibilite várias opções de cálculos a partir de um menu. O programa chamará a função correspondente a cada cálculo.

//[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50

//[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10

//[ c ] S = 1000/1 - 997/2 + 994/3.........

//[ d ] S = 480/10 - 475/11 + 470/12 - .......

//[ f ] FIM

#include <stdio.h>

void opa() {
    float soma = 0.0;
    for (int i = 1, j = 1; i <= 99 && j <= 50; i += 2, j++) {
        soma += (float)i / j;
    }
    printf("Resultado: S = %.2f\n", soma);
}

void opb() {
    float soma = 0.0;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0)
            soma -= (float)i / i;
        else
            soma += (float)i / i;
    }
    printf("Resultado: S = %.2f\n", soma);
}

void opc() {
    float soma = 0.0;
    for (int i = 1000, j = 1; i >= 1; i -= 3, j++) {
        if (j % 2 == 0)
            soma -= (float)i / j;
        else
            soma += (float)i / j;
    }
    printf("Resultado: S = %.2f\n", soma);
}

void opd() {
    float soma = 0.0;
    for (int i = 480, j = 10; i >= 1; i -= 5, j++) {
        if (j % 2 == 0)
            soma -= (float)i / j;
        else
            soma += (float)i / j;
    }
    printf("Resultado: S = %.2f\n", soma);
}

int main() {
    char op;

    do {
        printf("\n---------------------- MENU ---------------------\n");
        printf("[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50\n");
        printf("[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10\n");
        printf("[ c ] S = 1000/1 - 997/2 + 994/3.........\n");
        printf("[ d ] S = 480/10 - 475/11 + 470/12 - .......\n");
        printf("[ f ] FIM\n");
        printf("-------------------------------------------------\n");
        printf("Insira a opção desejada: ");
        scanf(" %c", &op);

        if (op == 'a' || op == 'A') {
            opa();
        } else if (op == 'b' || op == 'B') {
            opb();
        } else if (op == 'c' || op == 'C') {
            opc();
        } else if (op == 'd' || op == 'D') {
            opd();
        } else if (op == 'f' || op == 'F') {
            printf("Programa encerrado.\n");
            break;  
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (1);

    return 0;
}
