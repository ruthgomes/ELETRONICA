/*
2)	Escreva um programa que calcule o salário bruto, o salário líquido e o imposto a pagar seguindo as seguintes regras:
•	Se salário < 1000, paga imposto de 5%.
•	Se salário >= 1000 e < 5000, paga imposto de 11%.
•	Se salário >= 5000, paga imposto de 35%.
*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main(void)  // Início da função principal do programa
{
    float bruto, liquido, imposto;  // Declaração de três variáveis do tipo float: bruto, liquido e imposto

    printf("Digite o seu salario bruto: ");  // Imprime a mensagem para o usuário digitar o salário bruto
    scanf("%f", &bruto);  // Lê o valor digitado pelo usuário e armazena na variável bruto

    if (bruto < 0)  // Verifica se o salário bruto é negativo
    {
        printf("Erro: salario invalido. Digite um valor positivo.");
        return 1;  // Termina o programa com código de erro
    }

    if (bruto < 1000)  // Verifica se o salário bruto é menor que 1000
    {
        imposto = bruto * 0.05;  // Calcula o imposto de 5%
    }
    else if (bruto >= 1000 && bruto < 5000)  // Verifica se o salário bruto está entre 1000 (inclusivo) e 5000 (exclusivo)
    {
        imposto = bruto * 0.11;  // Calcula o imposto de 11%
    }
    else if (bruto >= 5000)  // Verifica se o salário bruto é maior ou igual a 5000
    {
        imposto = bruto * 0.35;  // Calcula o imposto de 35%
    }

    liquido = bruto - imposto;  // Calcula o salário líquido subtraindo o imposto do salário bruto

    printf("Salario Bruto: R$ %.2f\n", bruto);  // Imprime o salário bruto com duas casas decimais
    printf("Imposto a pagar: R$ %.2f\n", imposto);  // Imprime o imposto a pagar com duas casas decimais
    printf("Salario Liquido: R$ %.2f\n", liquido);  // Imprime o salário líquido com duas casas decimais

    return 0;  // Indica que o programa terminou com sucesso
}
