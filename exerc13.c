#include <stdio.h>

int maiorMedia(int valores[]){
    
    float media=0.0;
    int soma=0;
    int contador = 0;
    
    for (int i=0; i<15; i++)
    {
        soma = soma+valores[i];
    }
        media = (float)soma/15;

    for (int i=0; i<15; i++)
    {
        if (valores[i]>media)
        {
            contador+=1;
        }
    }
    return contador;
    
    
}

int main(){
    int numeros[15];
    int numero_lido;

    for(int i = 0; i < 15; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero_lido);

        numeros[i] = numero_lido;
    }
    
    printf ("A quantidade de numeros maiores que a media dos elementos eh: %d", maiorMedia(numeros));
}