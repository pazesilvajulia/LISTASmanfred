#include <stdio.h>

int main() {
    int n1, n2, n3, temp;
    
    printf("Insira um numero inteiro: ");
    scanf("%d", &n1);
    printf("Insira outro numero inteiro: ");
    scanf("%d", &n2);
    printf("Insira mais um numero inteiro: ");
    scanf("%d", &n3);
    
    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n2 > n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    
    printf("Ordem crescente: %d %d %d\n", n1, n2, n3);
    
    return 0;
}