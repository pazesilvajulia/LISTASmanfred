#include <stdio.h>
 
int menu() {
    int op;
    printf("\n--------------MENU--------------\n");
    printf("1 - Rio de Janeiro\n");
    printf("2 - Buenos Aires\n");
    printf("3 - Londres\n");
    printf("4 - Roma\n");
    printf("5 - Cairo\n");
    printf("6 - Moscou\n");
    printf("7 - Chicago\n");
    printf("8 - México\n");
    printf("9 - Nova Iorque\n");
    printf("10 - Iugoslávia\n");
    printf("11 - Cuiabá\n");
    printf("12 - Ilhas São Pedro\n");
    printf("--------------------------------\n");
   
    printf("Insira para qual fuso horário você deseja alterar seu horário local: ");
    scanf("%d", &op);
    return op;
}
 
void fuso(int op) {
    int h, m;
 
    printf("Digite o horário local (hh:mm): ");
    scanf("%d:%d", &h, &m);
 
    switch(op) {
        case 1:
            printf("Horário com o fuso: %02d:%02d\n", h, m);
            break;
        case 2:
            printf("Horário com o fuso: %02d:%02d\n", h, m);
            break;
        case 3:
            printf("Horário com o fuso: %02d:%02d\n", (h+3) % 24, m);
            break;
        case 4:
            printf("Horário com o fuso: %02d:%02d\n", (h+4) % 24, m);
            break;
        case 5:
            printf("Horário com o fuso: %02d:%02d\n", (h+5) % 24, m);
            break;
        case 6:
            printf("Horário com o fuso: %02d:%02d\n", (h+6) % 24, m);
            break;
        case 7:
            printf("Horário com o fuso: %02d:%02d\n", (h-3+24) % 24, m);
            break;
        case 8:
            printf("Horário com o fuso: %02d:%02d\n", (h-3+24) % 24, m);
            break;
        case 9:
            printf("Horário com o fuso: %02d:%02d\n", (h-2+24) % 24, m);
            break;
        case 10:
            printf("Horário com o fuso: %02d:%02d\n", (h-2+24) % 24, m);
            break;
        case 11:
            printf("Horário com o fuso: %02d:%02d\n", (h-1+24) % 24, m);
            break;
        case 12:
            printf("Horário com o fuso: %02d:%02d\n", (h+1) % 24, m);
            break;
        default:
            printf("Opção de fuso inválida. Tente novamente.\n");
    }
}
 
int main() {
    int op = menu();  // Chama o menu e obtém a opção do usuário
    fuso(op);         // Ajusta o horário conforme o fuso escolhido
    return 0;
}