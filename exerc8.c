#include <stdio.h>

int bubble(int valores[]){
    int armazenamento=0;

    for(int j=0; j<10; j++)
    
    {
        for (int i=0; i<9; i++)
        {
            if (valores[i]>valores[i+1])
            {
               armazenamento = valores[i];
               valores[i] = valores[i+1];
               valores[i+1] = armazenamento;
            }
        }  
    }

    printf ("Os numeros em ordem do vetor sao:\n");
    
    for(int i = 0; i < 10; i++)
    {
        printf ("%d\n", valores[i]);
    }
        
        
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
    bubble(numeros);
}