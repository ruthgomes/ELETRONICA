/*
1)	Escreva um programa que solicite um salário ao utilizador e mostre o imposto a pagar.
•	Se o salário for negativo ou zero mostre o erro respectivo.
•	Se o salário for maior que R$1000, paga 10% de imposto, se não paga apenas 5%.
*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main(void)  // Início da função principal do programa
{
    float salario, imposto, salario_final;  // Declaração de duas variáveis do tipo float: salario e imposto

    printf("Digite o seu salario: ");  // Imprime a mensagem para o usuário digitar o salário
    scanf(" %f",&salario);  // Lê o valor digitado pelo usuário e armazena na variável salario

    if (salario <= 0)  // Verifica se o salário é negativo
    {
        printf("Erro, salario invalido. Digite novamente seu salario.");  // Se o salário for negativo, imprime uma mensagem de erro
    } 
    else if (salario > 1000)  // Verifica se o salário é maior que 1000
    {
        imposto = salario * 0.10;  // Calcula o imposto de 10% sobre o salário
        salario_final = salario - imposto; // Calcula o salário após dedução do imposto
         printf("O imposto de 10%% sobre seu salario eh de R$%.2f. Salario final: R$%.2f", imposto, salario_final);  // Imprime o valor do imposto de 10%
    }
    else  // Se o salário não for maior que 1000 e nem negativo, então é menor ou igual a 1000
    {
        imposto = salario * 0.05;  // Calcula o imposto de 5% sobre o salário
         salario_final = salario - imposto;  // Calcula o salário após dedução do imposto
        printf("O imposto de 5%% sobre seu salario eh de R$%.2f. Salario final: R$%.2f", imposto, salario_final);  // Imprime o valor do imposto de 5%
    }

    return 0;  // Indica que o programa terminou com sucesso
}