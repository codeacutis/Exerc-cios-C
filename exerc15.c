#include <stdio.h>

int somavetores(int valores1[], int valores2[]){
    
int valores3[3];
int soma3=0;

for (int i=0; i<3; i++)
{
    soma3=0;
    soma3 = valores1[i]+valores2[i];
    valores3[i] = soma3;
}

for (int i=0; i<3; i++)
{
    printf ("%d\n", valores3[i]);
}
    
    
}

int main(){
    int numeros1[3], numeros2[3];
    int numero_lido1, numero_lido2 ;

    for(int i = 0; i < 3; i++)
    {
        printf("Digite um numero a ser armazenado no primeiro vetor: ");
        scanf("%d", &numero_lido1);

        numeros1[i] = numero_lido1;
    }
    printf("\n");
    
    for(int i = 0; i < 3; i++)
    {
        printf("Digite um numero a ser armazenado no segundo vetor: ");
        scanf("%d", &numero_lido2);

        numeros2[i] = numero_lido2;
    }
    
    printf ("A soma dos dois vetores eh:\n");
    somavetores(numeros1, numeros2);
}