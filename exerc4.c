#include <stdio.h>

int numPar(int valores[]){

        printf("Os valores pares sao:\n");
        for(int i = 0; i < 20; i++)
        {             
            if(valores[i] % 2 == 0)
            {
               printf("%d\n",valores[i]);
            }
        }
    }

int numImpar(int valores[]){
        
        printf("Os valores impares sao:\n");
        
        for(int i = 0; i < 20; i++)
        {             
            if(valores[i] % 2 != 0)
            {
               printf("%d\n", valores[i]);
            }
        }
    }

int main()
{
    int numeros[20];
    int numero_lido;

    for(int i = 0; i < 20; i++)
    {
        printf("Digite um numero:\n");
        scanf("%d", &numero_lido);

        numeros[i] = numero_lido;
    }
numImpar(numeros);
numPar(numeros);
}