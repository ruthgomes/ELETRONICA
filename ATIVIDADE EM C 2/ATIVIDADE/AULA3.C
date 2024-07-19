// IF-ELSE E ELSE IF.
#include<stdio.h>
#include<stdlib.h>
int main(void) {
    float n1, n2, n3, n4, resultado; // Declaração das variáveis reais das notas n1, n2, n3, n4 e o resultado;

    printf("Digite a primeira nota: "); // Pede para digitar a primeira nota de um aluno
    scanf(" %f", &n1); // Faz a chamada da nota "n1" do tipo float

    printf("Digite a segunda nota: "); // Pede para digitar a segunda nota de um aluno
    scanf(" %f", &n2); // Faz a chamada da nota "n2" do tipo float

    printf("Digite a terceira nota: "); // Pede para digitar a terceira nota de um aluno
    scanf(" %f", &n3); // Faz a chamada da nota "n3" do tipo float

    printf("Digite a quarta nota: "); // Pede para digitar a quarta nota de um aluno
    scanf(" %f", &n4); // Faz a chamada da nota "n4" do tipo float

    resultado = (n1 + n2 + n3 + n4) / 4; // declara a variável "resultado" fazendo a soma das 4 notas e as divide pela mesma quantidade de notas existentes

    if (resultado >= 7.5) { // Se o resultado das notas digitas pelo usuário for igual ou maior que 7,5
        printf("O aluno(a) esta aprovado com a nota final %.2f\n", resultado); // O aluno será aprovado com resultado x
    } else if (resultado >= 5 && resultado < 7.5) // Verifica se a nota está entre 5.0 e 7.4
    { 
        printf("O aluno(a) esta em recuperacao com a nota final %.2f\n", resultado); // Se caso o resultado estiver entre 5 e 7,4, o aluno está em recuperação
    } else {
        printf("O aluno(a) esta reprovado com a nota final %.2f\n", resultado); // E se a nota do aluno for abaixo de 5, ele automáticamente estará reprovado
    }
    
    return 0;
}