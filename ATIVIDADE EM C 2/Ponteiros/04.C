/**
 * Escreva um programa que leia três números inteiros nas variáveis x, y e z. Depois deve-se ordenar
x, y e z de tal forma que x armazene o menor valor, y armazene o intermediário, e z, o maior.
*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

void ordenar(int *a, int *b, int *c) {
    int temp;  // Declara uma variável temporária para auxiliar na troca dos valores
    
    // Ordena os números de modo que *a seja o menor, *b seja o intermediário, e *c seja o maior
    if (*a > *b) 
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) 
    {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) 
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() 
{
    int x, y, z;  // Declara três variáveis inteiras, x, y e z
    
    // Solicita ao usuário que digite três números inteiros
    printf("Digite tres numeros inteiros:\n");
    scanf("%d %d %d", &x, &y, &z);  // Lê os três números inteiros digitados pelo usuário e os armazena em x, y e z
    
    // Chama a função para ordenar os números
    ordenar(&x, &y, &z);
    
    // Exibe os números ordenados
    printf("Numeros ordenados: x = %d, y = %d, z = %d\n", x, y, z);
    
    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}