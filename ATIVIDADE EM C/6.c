/**
 * Faça um programa que leia cinco valores reais e imprima o quadrado de cada um deles. Ao fim, imprima também o somatório dos cinco.
**/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main(void)  // Início da função principal do programa
{
    float valores[5];  // Declaração de um array para armazenar cinco valores reais
    float quadrado;  // Variável para armazenar o quadrado de cada valor
    float soma = 0;  // Variável para armazenar a soma dos valores
    int i;  // Variável de controle para os loops

    printf("Digite cinco valores reais:\n");  // Solicita ao usuário que digite cinco valores reais

    for (i = 0; i < 5; i++)  // Loop para ler os cinco valores reais
    {
        printf("Valor %d: ", i + 1);  // Solicita ao usuário o valor na posição (i + 1)
        scanf("%f", &valores[i]);  // Lê o valor e armazena no array na posição i
    }

    printf("\nO quadrado dos valores sao:\n");  // Mensagem inicial para a impressão dos quadrados dos valores

    for (i = 0; i < 5; i++)  // Loop para calcular e imprimir o quadrado de cada valor
    {
        quadrado = valores[i] * valores[i];  // Calcula o quadrado do valor atual
        printf("Quadrado do valor %d: %.2f\n", i + 1, quadrado);  // Imprime o quadrado do valor com duas casas decimais
        soma += valores[i];  // Adiciona o valor original à soma
    }

    printf("\nA soma dos cinco valores eh: %.2f\n", soma);  // Imprime a soma dos cinco valores com duas casas decimais

    return 0;  // Indica que o programa terminou com sucesso
}