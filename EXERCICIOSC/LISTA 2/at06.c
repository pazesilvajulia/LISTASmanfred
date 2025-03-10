//Faça um programa que verifique se a letra digitada for: F ou M e imprima uma mensagem: masculino, feminino ou sexo inválido.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sex;
    
    printf("Insira o sexo:");
    scanf("%c",&sex);
    
    if(sex=='m'||sex=='M'){
        printf("\nmasculino");
    }else if(sex=='f'|| sex=='F'){
        printf("\nfeminino");
    }else{
        printf("\nsexo invalido");
    }
}