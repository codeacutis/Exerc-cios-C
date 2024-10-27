#include <stdio.h>
#include <math.h>

float desvioPadrao(int valores[]){
    
    float media=0.0;
    int soma=0.0;
    
    for (int i=0; i<10; i++)
    {
        soma = soma+valores[i];
    }
        media = (float)soma/10;
    
    float calc = 0.0;
    float desvio = 0.0;
    
    for (int i=0; i<10; i++)
    {
       calc = calc + ((valores[i]-media)*(valores[i]-media));
    }
        desvio = sqrt(calc/10);
        return desvio;
}

int main(){
    int numeros[10];
    int numero_lido;

    for(int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero_lido);

        numeros[i] = numero_lido;
    }
    
    printf ("O desvio padrao dos elementos do vetor eh: %.2f", desvioPadrao(numeros));
}

