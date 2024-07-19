/**
 * Faça um programa que solicite a digitação e armazene 20 números reais. em um vetor. 
 * Depois o programa deve ficar disponível para o usuário digitar o valor do índice para que 
 * seja exibido o número armazenado no índice solicitado. Para encerrar o programa, 
 * o usuário deve informar um índice inválido (lembre-se de que para um vetor de 20 posições os índices válidos são de 0 a 19).
*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main(void)  // Início da função principal do programa
{
    float n[20];  // Declaração de um vetor de 20 posições para armazenar números reais
    int indice, i;  // Declaração de variáveis do tipo int: indice para os índices e i para o controle do loop

    printf("Digite 20 numeros reais:\n");  // Solicita ao usuário que digite 20 números reais

    for (i = 0; i < 20; i++)  // Loop para ler os 20 números reais
    {
        printf("Numero %d: ", i + 1);  // Solicita o valor na posição (i + 1)
        scanf("%f", &n[i]);  // Lê o valor e armazena no vetor n na posição i
    }

    while (1)  // Loop infinito para solicitar o índice ao usuário
    {
        printf("Digite um indice (0 a 19) para exibir o valor armazenado (ou um indice invalido para sair): ");
        scanf("%d", &indice);  // Lê o índice fornecido pelo usuário

        if (indice < 0 || indice >= 20)  // Verifica se o índice é inválido
        {
            printf("Indice invalido. Encerrando o programa.\n");  // Mensagem de índice inválido e encerramento do programa
            break;  // Sai do loop infinito
        }

        printf("Valor no indice %d: %.2f\n", indice, n[indice]);  // Imprime o valor armazenado no índice solicitado
    }

    return 0;  // Indica que o programa terminou com sucesso
}