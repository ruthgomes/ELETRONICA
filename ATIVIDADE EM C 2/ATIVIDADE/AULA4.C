// SWITCH-CASE.
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n1, n2; // Declaração das variáveis de números inteiros n1 e n2
    char operacao; // Declaração da variável de caracter operacao

    printf("Digite o primeiro numero: "); // Mostra na tela o primeiro número inteiro que seja digitado
    scanf("%d", &n1); // Leitura do primeiro número "n1"

    printf("Digite o segundo numero: "); // Mostra na tela o segundo número inteiro que seja digitado
    scanf("%d", &n2); // Leitura do segundo número "n2"

    printf("Selecione a operacao que deseja (+, -, *, /): "); // Mostra na tela os símbolos que o usuário deve utilizar para fazer a operação
    scanf(" %c", &operacao);  // Note o espaço antes de %c para ignorar qualquer caractere em branco anterior

    switch (operacao) { // O comando SWITCH tem a função parecida com a do IF-ELSE a diferença que ele permite o usuário escolher as opções
    case '+': // Após a digitação dos dois números e o usuário digite o símbolo de soma '+' será mostrado em tela a seguinte mensagem
        printf("A soma entre %d e %d eh: %d\n", n1, n2, n1 + n2); // Será mostrado na tela a soma entre os dois números digitados pelo usuário e a soma feita por esses dois números, faz a leitura dos dois números e a soma
        break; // O break funciona para parar o funcionamento do código após a opção desejada para não houver mais nenhuma alteração
    
    case '-': // Após a digitação dos dois números e o usuário digite o símbolo de subtracao '-' será mostrado em tela a seguinte mensagem
        printf("A subtracao entre %d e %d eh: %d\n", n1, n2, n1 - n2); // Será mostrado na tela a subtracao entre os dois números digitados pelo usuários e a subtracao feita por esses dois números, faz a leitura dos dois números e a subtracao
        break;

    case '*': // Após a digitação dos dois números e o usuário digite o símbolo do produto '*' será mostrado em tela a seguinte mensagem
        printf("O produto entre %d e %d eh: %d\n", n1, n2, n1 * n2); // Será mostrado na tela o produto entre os dois números digitados pelo usuários e o produto feito por esses dois números, faz a leitura dos dois números e o produto
        break;

    case '/': // Após a digitação dos dois números e o usuário digite o símbolo de divisao '/' será mostrado em tela a seguinte mensagem
        if (n2 != 0) {
            printf("A divisao entre %d e %d eh: %d\n", n1, n2, n1 / n2); // Será mostrado na tela a divisao entre os dois números digitados pelo usuários e a divisao feita por esses dois números, faz a leitura dos dois números e a divisao
        } else {
            printf("Erro: Divisao por zero nao e permitida.\n"); // Se o usuário tentar dividir por 0 será mostrado a mensagem na tela
        }
        break;
    
    default:
        printf("Operacao invalida.\n"); // Se o usuário digitar qualquer outra coisa que não seja os símbolos mostrado em tela, será exibido em tela a seguinte mensagem
        break;
    }
    return 0;
}