#include <stdio.h>
#include <math.h>

int main() {
    float b1, b2, b3, b4, media;
    printf("Insira a bimestral 1: ");
    scanf("%f", &b1);
    printf("Insira a bimestral 2: ");
    scanf("%f", &b2);
    printf("Insira a bimestral 3: ");
    scanf("%f", &b3);
    printf("Insira a bimestral 4: ");
    scanf("%f", &b4);
    media = (b1+b2+b3+b4)/4;
    
    printf("A média das bimestrais é de: %.2f", media);
    return 0;
}