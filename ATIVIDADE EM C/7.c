/**
 * Faça um programa que imprima todos os números impares no intervalo de 1 a 100
*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main(void)  // Início da função principal do programa
{
    int i;  // Declaração de uma variável do tipo int: i

    printf("Numeros impares de 1 a 100:\n");  // Imprime a mensagem inicial

    for (i = 1; i <= 100; i++)  // Loop de 1 a 100
    {
        if (i % 2 != 0)  // Verifica se o número é ímpar (resto da divisão por 2 diferente de 0)
        {
            printf("%d\n", i);  // Imprime o número ímpar seguido de uma quebra de linha
        }
    }

    printf("\n");  // Adiciona uma quebra de linha ao final para melhor formatação

    return 0;  // Indica que o programa terminou com sucesso
}