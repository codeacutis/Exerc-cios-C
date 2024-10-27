#include <stdio.h>

int diferente(int valores[]){
 int repetido = 0;
     
    for(int i = 0; i < 15; i++)
    {
        repetido = 0;

        for (int j=0; j<i; j++)
        {
            if (valores[i]==valores[j])
            {
                repetido=1;
                break;
            }
        }
        if (!repetido)
        {
            printf("%d\n", valores[i]);
        }
    }
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
    
    printf ("O vetor feito de apenas numeros distintos eh:\n");
    diferente(numeros);
}