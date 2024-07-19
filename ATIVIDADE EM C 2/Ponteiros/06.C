/**
Faça um programa que declare um vetor de inteiros com cinco posições, peça para o usuário preencher suas informações e 
imprima-as na tela. Todas as operações de acesso ao vetor (exceto sua declaração) devem ser feitas com notação de ponteiros.
*/

#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída

int main(void)
{
    int vetor[5];    // Declara um vetor de inteiros com cinco posições
    int *ptr;        // Declara um ponteiro para inteiro

    // Solicita ao usuário que digite cinco números inteiros
    printf("Digite cinco numeros inteiros:\n");

    // Loop para preencher o vetor usando notação de ponteiros
    for(ptr = vetor; ptr < vetor + 5; ptr++)
    {
        scanf("%d", ptr);   // Lê um número inteiro e armazena na posição apontada por 'ptr'
    }

    // Exibe os valores armazenados no vetor
    printf("Valores digitados:\n");

    // Loop para percorrer o vetor usando notação de ponteiros
    for(ptr = vetor; ptr < vetor + 5; ptr++)
    {
        printf("%d ", *ptr);  // Imprime o valor apontado por 'ptr'
    }

    printf("\n");  // Imprime uma nova linha após os valores

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}