#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;
    int c;
    printf("Insira um número: ");
    scanf("%d", &a);
    printf("Insira outro número: ");
    scanf("%d", &b);
    c = a+b;
    printf("A soma dos números é: %d", c);
    return 0;
}