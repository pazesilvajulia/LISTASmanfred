// Faça uma função que calcule a média de uma seqüência de valores, os valores deverão ser passados por meio de um vetor.

#include <stdio.h>

void calcula(int tamanho, float *numeros) {
    float soma = 0, media;

    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];  
    }

    media = soma / tamanho;
    printf("A media dos numeros inseridos eh: %.1f\n", media);
}

int main() {
    int tamanho;

    printf("Insira quantos numeros voce deseja calcular: ");
    scanf("%d", &tamanho);

    float numeros[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o %do numero: ", (i + 1));
        scanf("%f", &numeros[i]);
    }

    calcula(tamanho, numeros); 

    return 0;
}
