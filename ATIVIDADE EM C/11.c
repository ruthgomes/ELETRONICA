/**
 * Faça um programa que: preencha dois vetores A e B de cinco posições, com números inteiros; 
 * atribua a um vetor RES à soma do vetor A com B (a primeira posição de A será somada à primeira posição de B 
 * e o resultado será atribuído à primeira posição do vetor RES); mostre os valores do vetor RES.
*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main(void)  // Início da função principal do programa
{
    int A[5], B[5], RES[5], i;  // Declaração de três vetores de 5 posições cada um e uma variável de controle i

    printf("Digite 5 valores inteiros para o vetor A:\n");  // Solicita ao usuário que digite 5 valores inteiros para o vetor A

    for (i = 0; i < 5; i++)  // Loop para ler os valores do vetor A
    {
        printf("A[%d]: ", i);  // Solicita o valor para a posição i do vetor A
        scanf("%d", &A[i]);  // Lê o valor e armazena no vetor A na posição i
    }

    printf("Digite 5 valores inteiros para o vetor B:\n");  // Solicita ao usuário que digite 5 valores inteiros para o vetor B

    for (i = 0; i < 5; i++)  // Loop para ler os valores do vetor B
    {
        printf("B[%d]: ", i);  // Solicita o valor para a posição i do vetor B
        scanf("%d", &B[i]);  // Lê o valor e armazena no vetor B na posição i
    }

    for (i = 0; i < 5; i++)  // Loop para calcular a soma dos vetores A e B e armazenar no vetor RES
    {
        RES[i] = A[i] + B[i];  // Soma o valor na posição i do vetor A com o valor na posição i do vetor B e armazena no vetor RES
    }

    printf("\nValores do vetor RES (soma de A e B):\n");  // Imprime os valores do vetor RES

    for (i = 0; i < 5; i++)  // Loop para imprimir os valores do vetor RES
    {
        printf("RES[%d] = %d\n", i, RES[i]);  // Imprime o valor na posição i do vetor RES
    }

    return 0;  // Indica que o programa terminou com sucesso
}