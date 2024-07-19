/**
 * Faça um programa que para o usuário digitar dois números inteiros e, em seguida, imprima o
endereço da variável de maior valor.
*/

#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída

int main() 
{
    int a, b;  // Declara duas variáveis inteiras, 'a' e 'b'
    
    // Solicita ao usuário que digite dois números inteiros
    printf("Digite dois números inteiros:\n");
    scanf("%d %d", &a, &b);  // Lê os dois números inteiros digitados pelo usuário e armazena em 'a' e 'b'
    
    // Compara os valores de 'a' e 'b'
    if (a > b) 
    {
        // Se 'a' for maior que 'b', imprime o endereço da variável 'a'
        printf("Endereço da variável com maior valor: %p\n", (void*)&a);
    } 
    else 
    {
        // Se 'b' for maior ou igual a 'a', imprime o endereço da variável 'b'
        printf("Endereço da variável com maior valor: %p\n", (void*)&b);
    }
    
    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}