#include <stdio.h>

int ValorPositivo(int valores[])
{
    printf("Os valores positivos sao:\n");
    
    for(int i = 0; i < 10; i++)
    {
        if(valores[i]> 0)
            {
                printf("%d\n",valores[i]);
            }
    }
}

int ValorNegativo(int valores[])
{

    printf("Os valores negativos sao:\n");
    for(int i = 0; i < 10; i++)
    {
        if(valores[i]<0)
            {
                printf("%d\n",valores[i]);
            }
    }
}

int main(){
    int numeros[10];
    int numero_lido;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero:");
        scanf("%d", &numero_lido);

        numeros[i] = numero_lido;
    }

ValorPositivo(numeros);
ValorNegativo(numeros);
}