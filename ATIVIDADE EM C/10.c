/**
 * Faça um programa que exiba na tela a tabuada de multiplicação por 6. 
 * O programa deve imprimir na primeira linha a multiplicação de 6 por 1; 
 * na segunda, de 6 por 2; e assim sucessivamente, até a décima (6 vezes 10).
*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main(void)  // Início da função principal do programa
{
    int i;  // Declaração de uma variável de controle do tipo int: i

    printf("Tabuada de 6:\n");  // Imprime a mensagem inicial indicando a tabuada de 6

    for (i = 1; i <= 10; i++)  // Loop de 1 a 10
    {
        printf("6 * %d = %d\n", i, 6 * i);  // Imprime o resultado da multiplicação de 6 por i
    }

    return 0;  // Indica que o programa terminou com sucesso
}