#include <stdio.h>

int multValores(int valores[]){
    int mult = 1;
    
    for(int i = 0; i < 6; i++)
    {
     mult *= valores[i];
    }

    return mult;
}

int main(){
    int numeros[6];
    int numero_lido;

    for(int i = 0; i < 6; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &numero_lido);

        numeros[i] = numero_lido;
    }

    printf("O resultado da multiplicacao de todos os numeros eh: %d\n", multValores(numeros));
}