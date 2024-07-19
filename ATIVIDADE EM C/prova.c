#include <stdio.h>
int main(void) 
{
    float valores[5];
    int i;
    
    for(i = 0; i < 5; i++) 
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }
    float maior = valores[0];
    float menor = valores[0];
    int indiceMaior = 0;
    int indiceMenor = 0;
    for(i = 1; i < 5; i++) 
    {
        if(valores[i] > maior) 
        {
            maior = valores[i];
            indiceMaior = i;
        }
        if(valores[i] < menor) 
        {
            menor = valores[i];
            indiceMenor = i;
        }
    }
    printf("Maior valor: %.2f, no indice %d\n", maior, indiceMaior);
    printf("Menor valor: %.2f, no indice %d\n", menor, indiceMenor);
    
    return 0;
}