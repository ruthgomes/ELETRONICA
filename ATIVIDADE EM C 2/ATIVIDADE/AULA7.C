// DO-WHILE
#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída
int main() {
    float media, n1, n2, n3; // Declaração das variáveis do tipo float: media, n1, n2 e n3
    int sair; // Declaração e inicialização da variável inteira sair
    // Início do laço do-while, que garante pelo menos uma execução do bloco de código
    do {
        // Solicita ao usuário para digitar as notas do aluno
        printf("Digite as notas do aluno\n");
        
        printf("Digite a nota 1: ");
        scanf("%f", &n1); // Leitura da primeira nota do tipo float
        
        printf("Digite a nota 2: ");
        scanf("%f", &n2); // Leitura da segunda nota do tipo float
        
        printf("Digite a nota 3: ");
        scanf("%f", &n3); // Leitura da terceira nota do tipo float

        // Cálculo da média das três notas
        media = (n1 + n2 + n3) / 3;

        // Exibição da média calculada, formatada com uma casa decimal
        printf("\nA media do aluno e %.1f\n", media);

        // Pergunta ao usuário se deseja sair ou continuar
        printf("\nDigite 1 para sair ou 2 para continuar\n");
        scanf("%d", &sair); // Leitura da escolha do usuário, que altera o valor de sair
    } while (sair != 1); // O laço continua enquanto sair for diferente de 1

    return 0; // Retorno da função principal indicando que o programa terminou com sucesso
}