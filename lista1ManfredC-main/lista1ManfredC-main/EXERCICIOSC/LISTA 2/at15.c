//Faça um programa que tendo como dados de entrada o preço de custo de um produto e um código de origem, emita o preço junto de sua procedência. Caso o código não seja nenhum dos especificados, o produto deve ser classificado como importado. Código de origem: 1 - Sul, 2 - Norte 3 - Leste, 4 - Oeste, 5 ou 6 - nordeste 7 ou 8 Centro-oeste.

#include <stdio.h>

int main() {
    float p;
    int o;
    printf("\nDigite o preco de custo do produto: ");
    scanf("%f", &p);
    printf("\nDigite o codigo de origem: ");
    scanf("%d", &o);

    if(o == 1){
        printf("\nPreco do produto: %.2f\nCodigo de origem: 1 - Sul", p);
    }    
    else if(o == 2){
        printf("\nPreco do produto: %.2f\nCodigo de origem: 2 - Norte", p);
    }
    else if(o == 3){
        printf("\nPreco do produto: %.2f\nCodigo de origem: 3 - Leste", p);
    }
    else if(o == 4){
        printf("\nPreco do produto: %.2f\nCodigo de origem: 4 - Oeste", p);
    }
    else if(o == 5 || o == 6){
        printf("\nPreco do produto: %.2f\nCodigo de origem: 5 ou 6 - Nordeste", p);
    }
    else if(o == 7 || o == 8){
        printf("\nPreco do produto: %.2f\nCodigo de origem: 7 ou 8 - Centro-Oeste", p);
    }
    else{
        printf("\nPreco do produto: %.2f\nCodigo de origem: Produto importado.", p);
    }
    
    return 0;
    
}