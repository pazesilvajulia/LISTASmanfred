// Faça um programa que leia uma data, passe para uma função que reajuste esta data em cinco dias.

#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int dias(int mes, int ano) {
    if (mes == 2) {
        return (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ? 29 : 28;
    }
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        return 30;
    return 31;
}

void adiciona(Data *data) {
    data->dia += 5;

    while (data->dia > dias(data->mes, data->ano)) {
        data->dia -= dias(data->mes, data->ano);
        data->mes++;

        if (data->mes > 12) {
            data->mes = 1;
            data->ano++;
        }
    }
}

int main() {
    Data hoje;

    printf("Digite o dia: ");
    scanf("%d", &hoje.dia);

    printf("Digite o mês: ");
    scanf("%d", &hoje.mes);

    printf("Digite o ano: ");
    scanf("%d", &hoje.ano);

    
    adiciona(&hoje);

    
    printf("5 dias apos a data inserida sera: %02d/%02d/%04d\n", hoje.dia, hoje.mes, hoje.ano);

    return 0;
}