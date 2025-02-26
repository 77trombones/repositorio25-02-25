#include <stdio.h>

int main() {
    int numero;
    printf("Insira o seu número: ");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
        printf("Par");
    }

    if(numero % 2 == 1){
        printf("Ímpar");
    }
}    