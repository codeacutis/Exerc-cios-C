#include <stdio.h>

int verificar(int valores[]){
    int num=0;

    printf ("Digite um numero para verificar se esta no vetor: ");
    scanf ("%d", &num);
    for(int i = 0; i < 12; i++)
    {
        if (num==valores[i])
        {
            printf ("O numero esta no vetor, na posicao: ");
            return i;
        }
    }
    return -1;
        
}

int main(){
    int numeros[12];
    int numero_lido;

    for(int i = 0; i < 12; i++)
    {
        printf("Digite um numero :");
        scanf("%d", &numero_lido);

        numeros[i] = numero_lido;
    }
    printf ("%d", verificar(numeros));
}