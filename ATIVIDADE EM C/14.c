/**
 * Faça um programa que solicite a digitação do nome do aluno e de 3 notas do mesmo e calcule a média das notas. 
 * Caso a média seja maior que 6, imprima uma mensagem contendo o nome do aluno e a palavra “Aprovado”. 
 * Caso contrário, a mensagem deve conter o nome do aluno e a palavra “Reprovado”.
*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
#include <string.h>  // Inclui a biblioteca para manipulação de strings

int main(void)  // Início da função principal do programa
{
    char nome[50];  // Declaração de um vetor de caracteres para armazenar o nome do aluno
    float nota1, nota2, nota3, media;  // Declaração de variáveis para armazenar as notas e a média

    printf("Digite o nome do aluno: ");  // Solicita ao usuário que digite o nome do aluno
    fgets(nome, sizeof(nome), stdin);  // Lê o nome do aluno com possibilidade de espaços

    size_t len = strlen(nome);  // Calcula o comprimento da string nome
    if (len > 0 && nome[len - 1] == '\n')  // Verifica se o último caractere é uma nova linha
    {
        nome[len - 1] = '\0';  // Remove o caractere de nova linha
    }

    printf("Digite a primeira nota: ");  // Solicita ao usuário que digite a primeira nota
    scanf("%f", &nota1);  // Lê a primeira nota e armazena na variável nota1
    printf("Digite a segunda nota: ");  // Solicita ao usuário que digite a segunda nota
    scanf("%f", &nota2);  // Lê a segunda nota e armazena na variável nota2
    printf("Digite a terceira nota: ");  // Solicita ao usuário que digite a terceira nota
    scanf("%f", &nota3);  // Lê a terceira nota e armazena na variável nota3

    media = (nota1 + nota2 + nota3) / 3.0;  // Calcula a média das três notas

    if (media >= 6)  // Verifica se a média é maior ou igual a 6
    {
        printf("Aluno(a): %s - Aprovado(a) com nota %.2f\n", nome, media);  // Imprime mensagem de aprovação
    }
    else
    {
        printf("Aluno(a): %s - Reprovado(a) com nota %.2f\n", nome, media);  // Imprime mensagem de reprovação
    }

    return 0;  // Indica que o programa terminou com sucesso
}