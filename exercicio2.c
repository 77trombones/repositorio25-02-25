#include <stdio.h>

int main() {
    int numero1;
    int numero2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);
    
    if( numero1 > numero2) {
        printf("Maior: %d\n" , numero1);
             printf("Menor: %d\n" , numero2);
    }
    
    if( numero1 < numero2) {
        printf("Maior: %d\n" , numero2);
             printf("Menor: %d\n" , numero1);
    }
    
    if( numero1 == numero2)  {
        printf("Iguais");
    }
    
    return 0;
}