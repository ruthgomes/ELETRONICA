// FOR
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero, i; // Declaração das variáveis numero e i

    printf("Digite um numero: "); // Mostra na tela para o usuário digitar um número qualquer inteiro
    scanf(" %d", &numero); // Leitura da variável numero

    printf("Tabuada de %d:\n", numero);
    // Mostra na tela a tabuada com o número inteiro digitado pelo usuário
    for(i = 1; i <= 10; i++) {
    // Função For ou Para que lê o i que inicia com o valor 1 e vai até ou ser igual a 10 e o incrimento positivo, pois é ordem crescente
    printf("%d x %d = %d\n", numero, i, numero * i);
    // Mostra na tela o número digitado pelo usuário, a ordem crescente de 1 até 10 do i e faz a multiplição de número * i
    }

    return 0; // Retorna a main se positivo
}