#include <stdio.h>

float somarValores(int valores[]){
    int soma = 0;
    float media = 0.0;

    for(int i = 0; i < 8; i++)
    {
        soma = soma + valores[i];
    }
    
    media = (float) soma/8;
    return media;
}

int main(){
    int numeros[8];
    int numero_lido;

    for(int i = 0; i < 8; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &numero_lido);

        numeros[i] = numero_lido;
    }

    printf("A media eh: %.2f\n", somarValores(numeros));
}