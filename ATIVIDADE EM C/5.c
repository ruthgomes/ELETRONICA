/*Faça um programa que leia um número dado como entrada e apresente a mensagem “O número está na faixa de 20 a 90” 
se o valor fornecido estiver entre 20 e 90.
*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main(void)  // Início da função principal do programa
{
    int n;  // Declaração de uma variável do tipo int: n

    printf("Digite um numero: \n");  // Imprime a mensagem para o usuário digitar um número
    scanf("%d", &n);  // Lê o valor digitado pelo usuário e armazena na variável n

    if (n >= 20 && n <= 90)  // Verifica se o número está entre 20 e 90 (inclusive)
    {
        printf("O numero esta na faixa de 20 a 90\n");  // Imprime que o número está na faixa
    }
    else  // Se o número não estiver entre 20 e 90
    {
        printf("O numero nao esta na faixa de 20 a 90\n");  // Imprime que o número não está na faixa
    }

    return 0;  // Indica que o programa terminou com sucesso
}