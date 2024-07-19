/**
 * Faça um programa que peça para o usuário digitar uma palavra e em seguida imprima-a de trás para
frente.
*/

#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída
#include <string.h>  // Inclui a biblioteca para funções de manipulação de strings, como 'strlen'

int main(void)
{
    char palavra[1000];  // Declara um array de caracteres para armazenar a palavra digitada pelo usuário
    int i, comprimento;  // Declara variáveis auxiliares: 'i' para o loop e 'comprimento' para armazenar o comprimento da palavra

    printf("Digite uma palavra: ");  // Solicita ao usuário que digite uma palavra
    scanf(" %s", palavra);  // Lê a palavra digitada pelo usuário e armazena no array 'palavra'
                            // Note que há um espaço antes do %s para consumir qualquer espaço em branco residual

    comprimento = strlen(palavra);  // Calcula o comprimento da palavra usando a função 'strlen' e armazena em 'comprimento'

    printf("Palavra invertida: ");  // Exibe a mensagem "Palavra invertida: "

    // Loop para percorrer a palavra de trás para frente
    for(i = comprimento - 1; i >= 0; i--)
    {
        putchar(palavra[i]);  // Imprime o caractere atual da palavra
    }

    printf("\n");  // Imprime uma nova linha após a palavra invertida

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}