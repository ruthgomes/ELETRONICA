// WHILE
#include<stdio.h>
// Inclui a biblioteca padrão de entrada e saída, permitindo o uso de funções como printf e scanf
int main() {
    int n1, n2, soma; 
    // Declaração de três variáveis inteiras: n1, n2 e soma

    while(n1 + n2 != 0)
    // != não necessariamente obrigatório, pois é um loop infinito.
    // Início de um loop while. O loop continua enquanto a soma de n1 e n2 for diferente de zero.
    {
        printf("\nDigite o primeiro numero: ");
        // Exibe uma mensagem pedindo ao usuário para digitar o primeiro número

        scanf("%d", &n1);
        // Lê um número inteiro digitado pelo usuário e armazena na variável n1

        printf("\nDigite o segundo numero: ");
        // Exibe uma mensagem pedindo ao usuário para digitar o segundo número

        scanf("%d", &n2);
        // Lê um número inteiro digitado pelo usuário e armazena na variável n2

        soma = n1 + n2;
        // Calcula a soma de n1 e n2 e armazena o resultado na variável soma

        printf("\n %d \n ", soma);
        // Exibe o valor da soma dos dois números digitados
    }
    return 0;
}
