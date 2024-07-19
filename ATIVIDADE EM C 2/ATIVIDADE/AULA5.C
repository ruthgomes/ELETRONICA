// PONTEIROS
#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída, necessária para usar printf e scanf
// Função para obter a recomendação com base no clima, ponteiro.
void obterRecomendacao(int clima, char* recomendacao) {
    if (clima == 1) {  // Verifica se o clima é igual a 1 (chovendo)
        sprintf(recomendacao, "Está chovendo. Use um guarda-chuva!");  // Escreve a recomendação para chuva na string recomendacao
    } else if (clima == 2) {  // Verifica se o clima é igual a 2 (nevando)
        sprintf(recomendacao, "Está nevando. Use um casaco de neve!");  // Escreve a recomendação para neve na string recomendacao
    } else if (clima == 3) {  // Verifica se o clima é igual a 3 (ensolarado)
        sprintf(recomendacao, "Está ensolarado. Use óculos de sol!");  // Escreve a recomendação para sol na string recomendacao
    } else {  // Caso nenhuma das condições acima seja verdadeira
        sprintf(recomendacao, "O clima está bom. Não precisa de nada especial!");  // Escreve uma recomendação geral na string recomendacao
    }
}
int main() {
    int clima;  // Declara uma variável inteira para armazenar o estado do clima
    char recomendacao[50];  // Declara uma string para armazenar a recomendação, com espaço para 50 caracteres

    // Solicita ao usuário que insira o estado do clima
    printf("Digite o estado do clima:\n");
    printf("1 - Chovendo\n");
    printf("2 - Nevando\n");
    printf("3 - Ensolarado\n");
    printf("4 - Outro\n");
    printf("Sua escolha: ");
    scanf("%d", &clima);  // Lê a entrada do usuário e armazena na variável clima

    // Obter a recomendação com base na entrada do usuário
    obterRecomendacao(clima, recomendacao);  // Chama a função obterRecomendacao passando clima e a string recomendacao

    // Exibir a recomendação
    printf(" %s\n", recomendacao);  // Imprime a recomendação armazenada na string recomendacao

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
