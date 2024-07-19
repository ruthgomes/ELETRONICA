/**
Faça um programa que conte a quantidade de vogais que aparecem em um texto digitado pelo
usuário. Imprima o resultado no final do programa.
*/
#include<stdio.h>   // Inclui a biblioteca padrão de entrada e saída
#include<ctype.h>   // Inclui a biblioteca para funções de manipulação de caracteres, como 'tolower'

int main(void)
{
    char texto[1000];  // Declara um array de caracteres para armazenar o texto digitado pelo usuário
    int i, contador_vogais = 0;  // Declara variáveis auxiliares: 'i' para o loop e 'contador_vogais' para contar o número de vogais

    printf("Digite um texto: ");  // Solicita ao usuário que digite um texto
    fgets(texto, sizeof(texto), stdin);  // Lê o texto digitado pelo usuário e armazena no array 'texto'

    // Loop para percorrer cada caractere do texto
    for(i = 0; texto[i] != '\0'; i++)
    {
        char ch = tolower(texto[i]);  // Converte o caractere atual para minúsculo
        // Verifica se o caractere é uma vogal
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            contador_vogais++;  // Incrementa o contador de vogais
        }
    }

    // Imprime a quantidade de vogais encontrada no texto
    printf("Quantidade de vogais no texto: %d\n", contador_vogais);

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}