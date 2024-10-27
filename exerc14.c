#include <stdio.h>

int rotacionar(int valores[]){
    int fixarvalor = 0;
    
    fixarvalor = valores[11];
    
    for (int i=11; i>0; i--)
    {
        valores [i] = valores[i-1];
    }
    
    valores[0] = fixarvalor;
    
    
    for (int i=0; i<12; i++)
    printf ("%d\n", valores[i]);
    
    
}

int main(){
    int numeros[12];
    int numero_lido;

    for(int i = 0; i < 12; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero_lido);

        numeros[i] = numero_lido;
    }
    
    printf ("O vetor rotacionado eh:\n");
    rotacionar(numeros);
}