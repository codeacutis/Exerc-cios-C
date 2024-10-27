#include <stdio.h>

int ValorMaior(int valores[])
{
    int maior = 0;

    for(int i = 0; i < 15; i++)
    {
        if(valores[i]>maior)
            {
                maior=valores[i];
            }
    }
    return maior;
}

int ValorMenor(int valores[])
{
    int menor = valores[0];

    for(int i = 0; i < 15; i++)
    {
        if(valores[i]<menor)
            {
                menor=valores[i];
            }
    }
    return menor;
}

int main(){
    int numeros[15];
    int numero_lido;

    for(int i = 0; i < 15; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &numero_lido);

        numeros[i] = numero_lido;
    }

    printf("O maior numero eh: %d\n", ValorMaior(numeros));
    printf("O maior numero eh: %d\n", ValorMenor(numeros));
}