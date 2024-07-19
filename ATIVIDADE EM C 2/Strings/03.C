/**
 * Faça um programa que leia uma frase do usuário e diga se ela é um palíndromo, desconsiderando
os espaços. Por exemplo, a palavra “arara” é um palíndromo, pois, se pode ler, indiferentemente, da
esquerda pra direita e vice-versa.
*/

#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída
#include <string.h>  // Inclui a biblioteca para funções de manipulação de strings
#include <ctype.h>   // Inclui a biblioteca para funções de manipulação de caracteres, como tolower

int main(void)
{
    char frase[1000], frase_sem_espacos[1000];  // Declara dois arrays de caracteres: um para a frase original e outro para a frase sem espaços
    int i, comprimento, eh_palindromo, j = 0;   // Declara variáveis auxiliares

    printf("Digite uma frase: ");  // Solicita ao usuário que digite uma frase
    fgets(frase, sizeof(frase), stdin);  // Lê a frase digitada pelo usuário e armazena no array 'frase'

    // Loop para remover espaços e novas linhas da frase e converter para minúsculas
    for(i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] != ' ' && frase[i] != '\n')  // Verifica se o caractere atual não é um espaço nem uma nova linha
        {
            frase_sem_espacos[j++] = tolower(frase[i]);  // Converte o caractere para minúsculo e armazena no array 'frase_sem_espacos'
        }
    }

    frase_sem_espacos[j] = '\0'; // Termina a string 'frase_sem_espacos' com o caractere nulo

    comprimento = strlen(frase_sem_espacos);  // Calcula o comprimento da string 'frase_sem_espacos'
    eh_palindromo = 1;  // Inicializa a variável 'eh_palindromo' como verdadeira (1)

    // Loop para verificar se a string 'frase_sem_espacos' é um palíndromo
    for(i = 0; i < comprimento / 2; i++)
    {
        if(frase_sem_espacos[i] != frase_sem_espacos[comprimento - i - 1])  // Compara os caracteres da frente com os de trás
        {
            eh_palindromo = 0;  // Se algum par de caracteres for diferente, define 'eh_palindromo' como falsa (0)
            break;  // Interrompe o loop
        }
    }

    // Imprime o resultado
    if(eh_palindromo)
    {
        printf("A frase eh um palindromo.\n");  // Se 'eh_palindromo' for verdadeira, imprime que a frase é um palíndromo
    }
    else
    {
        printf("A frase nao eh um palindromo.\n");  // Se 'eh_palindromo' for falsa, imprime que a frase não é um palíndromo
    }

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}