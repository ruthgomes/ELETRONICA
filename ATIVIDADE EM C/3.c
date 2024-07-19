/**
 * 3)	Faça um programa que leia dois números reais e mostre a soma e a média aritmética desses números.
*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main(void)  // Início da função principal do programa
{
    float n1, n2, soma, media;  // Declaração de quatro variáveis do tipo float: n1, n2, soma e media

    printf("Digite o primeiro numero: \n");  // Imprime a mensagem para o usuário digitar o primeiro número
    scanf("%f", &n1);  // Lê o valor digitado pelo usuário e armazena na variável n1

    printf("Digite o segundo numero: \n");  // Imprime a mensagem para o usuário digitar o segundo número
    scanf("%f", &n2);  // Lê o valor digitado pelo usuário e armazena na variável n2

    soma = n1 + n2;  // Calcula a soma dos dois números e armazena na variável soma

    media = soma / 2;  // Calcula a média dos dois números e armazena na variável media

    printf("Soma: %.2f\n", soma);  // Imprime a soma com duas casas decimais

    printf("Media: %.2f\n", media);  // Imprime a média com duas casas decimais

    return 0;  // Indica que o programa terminou com sucesso
}