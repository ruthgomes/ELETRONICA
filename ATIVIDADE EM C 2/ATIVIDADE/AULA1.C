// DECLARAÇÃO DE VARIÁVEIS ENTRADA E SAÍDA.

//diretiva + biblioteca.
#include<stdio.h>

//função principal, corpo e coração do codigo.
int main(){
    //declaracao de variavel.
    int inteiro;
    float real;
    char letra;
    char frase [10];
//para pegar um inteiro.
    printf("digite um numero inteiro: ");
    scanf("%d",&inteiro);
//para pegar um real.
    printf("digite um numero real: ");
    scanf("%f",&real);
//para pegar uma letra.
    printf("digite uma letra: ");
    scanf(" %c",&letra);
//para pegar um nome.
    printf("digite uma frase: ");
    scanf("  %s",&frase);
//mostra na tela as informacoes inseridas conforme pedidas.
    printf("numero inteiro: %d \nnumero real: %2.f\nletra: %c\nfrase: %s",inteiro,real,letra,frase);
//retorno da funcao.
    return 0;
}