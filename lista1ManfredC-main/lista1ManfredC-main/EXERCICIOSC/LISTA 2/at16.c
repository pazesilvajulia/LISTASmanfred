//Faça um programa para controle de temperatura de um forno que derrete alumínio. O programa deverá perguntar qual temperatura que o alumínio deverá ser trabalhado e operar nas seguintes condições:


//a. Se temperatura for inferior ou igual 500o C enviar uma mensagem para tela "Temperatura Inválida";

//b. Se temperatura for menor do que 700o C enviar uma mensagem para tela "Aquecimento Ligado em 100%";

//c. Se temperatura for menor do que 735o C enviar uma mensagem para tela "Aquecimento Ligado em 50%";

//d. Se temperatura for maior ou igual 735o C enviar uma mensagem para tela "Aquecimento Desligado";

//e. Se temperatura for maior do que 780o C enviar uma mensagem para tela "SUPERAQUECIMENTO";

//f. Os valores digitados devem ser inteiros e inferiores de 1000.


#include <stdio.h>

int main() {
    int temp;
        printf("(digite um número inteiro, inferior a 1000) Qual temperatura o alumínio deverá ser trabalhado?: ");
        scanf("%d", &temp);
        
        if(temp <= 500){
            printf("Temperatura inválida.");

        }
        else if(temp > 500 && temp < 700){
            printf("Aquecimento Ligado em 100%.");
        }
        else if(temp >= 700 && temp < 735){
            printf("Aquecimento Ligado em 50%.");
        }
        else if(temp >= 735){
            printf("Aquecimento Desligado.");
        }
        else if(temp > 780){
            printf("SUPERAQUECIMENTO.");
        }

    return 0;
}