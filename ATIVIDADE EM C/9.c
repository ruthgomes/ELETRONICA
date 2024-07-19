/**
 * Faça um programa que calcule a média de 5 números inteiros dados como entrada e imprima o resultado.
*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main(void)  // Início da função principal do programa
{
    int val[5], i, soma = 0;  // Declaração de um array para armazenar 5 valores inteiros, uma variável de controle i, e inicialização da variável soma em 0
    float media;  // Declaração de uma variável para armazenar a média

    printf("Digite cinco valores inteiros:\n");  // Solicita ao usuário que digite cinco valores inteiros

    for (i = 0; i < 5; i++)  // Loop para ler os cinco valores inteiros
    {
        printf("Valor %d: ", i + 1);  // Solicita ao usuário o valor na posição (i + 1)
        scanf("%d", &val[i]);  // Lê o valor e armazena no array na posição i
        soma += val[i];  // Adiciona o valor lido à soma
    }

    media = soma / 5.0;  // Calcula a média dos valores (divisão por 5.0 para garantir precisão com ponto flutuante)

    printf("A média dos valores eh: %.2f\n", media);  // Imprime a média dos valores com duas casas decimais

    return 0;  // Indica que o programa terminou com sucesso
}