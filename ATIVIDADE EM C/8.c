/**
 * Fazer um programa no qual o usuário vai entrando sucessivamente com valores positivos. 
 * Quando o usuário entrar com um valor negativo o programa para de pedir valores e calcula a média dos valores já fornecidos.
*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main(void)  // Início da função principal do programa
{
    float n, media, soma = 0;  // Declaração de variáveis do tipo float: n (para entrada), media, e soma (inicializada em 0)
    int contador = 0;  // Declaração de uma variável do tipo int para contar os valores positivos lidos

    printf("Digite valores positivos:\n");  // Solicita ao usuário que digite valores positivos

    while (1)  // Loop infinito para ler os valores
    {
        scanf("%f", &n);  // Lê um valor do usuário e armazena na variável n

        if (n < 0)  // Verifica se o valor é negativo
        {
            break;  // Se o valor for negativo, sai do loop
        }

        soma += n;  // Adiciona o valor lido à soma
        contador++;  // Incrementa o contador de valores positivos
    }

    if (contador > 0)  // Verifica se pelo menos um valor positivo foi digitado
    {
        media = soma / contador;  // Calcula a média dos valores positivos
        printf("A media dos valores digitados eh: %.2f\n", media);  // Imprime a média com duas casas decimais
    }
    else 
    {
        printf("Nenhum valor positivo foi digitado\n");  // Imprime uma mensagem caso nenhum valor positivo tenha sido digitado
    }

    return 0;  // Indica que o programa terminou com sucesso
}