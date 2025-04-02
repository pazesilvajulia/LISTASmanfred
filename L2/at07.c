//Faça um programa que verifique se uma letra digitada é vogal ou consoante.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    
    printf("Insira uma letra:");
    scanf("%c",&c);
    
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        printf("\nVogal");
    
    }else{
        printf("\nConsoante");
    }
    
    return 0;
}