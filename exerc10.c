#include <stdio.h>

int invertido(int valores[]){
     
    for(int i = 19; i >= 0; i--)
    {
        printf("%d\n", valores[i]);
    }
}


int main(){
    int numeros[20];
    int numero_lido;

    for(int i = 0; i < 20; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &numero_lido);

        numeros[i] = numero_lido;
    }
    
    printf ("O vetor invertido eh:\n");
    invertido(numeros);
}