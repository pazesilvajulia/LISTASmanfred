#include <stdio.h>

int main() {
    int d, m, a;
    printf("Insira uma data no formato dd/mm/aaaa: ");
    scanf("%d"/"%d"/"%d", &d, &m, &a);
    
    if(a > 0 && 1 >= m <= 12){
        if(m==02 && 0 < d >= 28){ //fevereiro
            printf("Data válida.");
        } else if (m==02 && 0 > d || d < 28){
            printf("Data inválida");
        }
        
        if(m==01 || m==03 || m == 05 || m == 07 || m == 08 || m == 10 || m == 12){
            if(0 < d >= 31){ //fevereiro
            printf("Data válida.");
            } 
            else if (d > 31 || d < 0){
            printf("Data inválida");
            }
        
        }
        
    } else{
        printf("Data inválida");
    }
    
    return 0;
}

//COM ERRO
