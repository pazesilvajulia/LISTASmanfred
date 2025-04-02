//Faça um programa que leia a idade de quatro alunos e apresente a mensagem conforme instruções:

//a. Se a média de idade dos alunos é inferior de 25, apresentar a mensagem "Turma Jovem";

//b. Se a média de idade dos alunos é entre 25 e 40, apresentar a mensagem "Turma Adulta";

//c. Se a média de idade dos alunos é acima de 40 anos, apresentar a mensagem "Turma Idosa".

#include <stdio.h>

int main() {
    float i1, i2, i3, i4, media;
    
    printf("Insira a idade do primeiro aluno: ");
    scanf("%f", &i1);
    printf("Insira a idade do segundo aluno: ");
    scanf("%f", &i2);
    printf("Insira a idade do terceiro aluno: ");
    scanf("%f", &i3);
    printf("Insira a idade do quarto aluno: ");
    scanf("%f", &i4);
    
    media = (i1+i2+i3+i4)/4;
    
    if(media < 40){
            if (media < 25) {
        printf("Turma jovem.");
    }    else{
        printf("Turma Adulta.");
    }
    }
    else if (media > 40) {
        printf("Aprovado com distincao.");
    }

    return 0;
}