/**
 * Faça um programa que solicite a digitação de 10 números inteiros e os armazene em um vetor. 
 * Depois o programa deve ler o vetor e imprimir na tela uma listagem dos múltiplos de 2, 
 * uma outra dos múltiplos de 3 e uma última listagem dos múltiplos de 5.
*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main(void)  // Início da função principal do programa
{
    int n[10], i;  // Declaração de um vetor de 10 posições para armazenar números inteiros e uma variável de controle i

    printf("Digite 10 numeros inteiros:\n");  // Solicita ao usuário que digite 10 números inteiros

    for (i = 0; i < 10; i++)  // Loop para ler os 10 números inteiros
    {
        printf("Numero %d: ", i + 1);  // Solicita o valor na posição (i + 1)
        scanf("%d", &n[i]);  // Lê o valor e armazena no vetor n na posição i
    }

    printf("\nMultiplos de 2:\n");  // Imprime a mensagem inicial para a lista de múltiplos de 2

    for (i = 0; i < 10; i++)  // Loop para verificar e imprimir os múltiplos de 2
    {
        if (n[i] % 2 == 0)  // Verifica se o número na posição i do vetor é múltiplo de 2
        {
            printf("%d ", n[i]);  // Imprime o número se for múltiplo de 2
        }
    }

    printf("\n");  // Imprime uma nova linha para separar as listas

    printf("Multiplos de 3:\n");  // Imprime a mensagem inicial para a lista de múltiplos de 3

    for (i = 0; i < 10; i++)  // Loop para verificar e imprimir os múltiplos de 3
    {
        if (n[i] % 3 == 0)  // Verifica se o número na posição i do vetor é múltiplo de 3
        {
            printf("%d ", n[i]);  // Imprime o número se for múltiplo de 3
        }
    }

    printf("\n");  // Imprime uma nova linha para separar as listas

    printf("Multiplos de 5:\n");  // Imprime a mensagem inicial para a lista de múltiplos de 5

    for (i = 0; i < 10; i++)  // Loop para verificar e imprimir os múltiplos de 5
    {
        if (n[i] % 5 == 0)  // Verifica se o número na posição i do vetor é múltiplo de 5
        {
            printf("%d ", n[i]);  // Imprime o número se for múltiplo de 5
        }
    }

    printf("\n");  // Imprime uma nova linha para finalizar a saída

    return 0;  // Indica que o programa terminou com sucesso
}