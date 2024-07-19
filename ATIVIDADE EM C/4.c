/*4)	Construa um programa que leia um número inteiro e imprima a informação se este número é ou não par.
*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main(void)  // Início da função principal do programa
{
    int n;  // Declaração de uma variável do tipo int: n

    printf("Digite um numero inteiro: ");  // Imprime a mensagem para o usuário digitar um número inteiro
    scanf("%d", &n);  // Lê o valor digitado pelo usuário e armazena na variável n

    if (n % 2 == 0)  // Verifica se o número é par (resto da divisão por 2 é igual a 0)
    {
        printf("O numero %d eh par\n", n);  // Imprime que o número é par
    }
    else  // Se o número não for par, então é ímpar
    {
         printf("O numero %d eh impar\n", n);  // Imprime que o número é ímpar
    }

    return 0;  // Indica que o programa terminou com sucesso
}