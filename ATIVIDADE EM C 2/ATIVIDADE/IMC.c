#include<stdio.h>

int main(){
//faça um codigo que tire o MMC do usuario.

float peso;
float altura;
float IMC;

    printf("Digite seu peso: \n");
    scanf("%f",&peso);

    printf("Digite sua altura: \n");
    scanf("%f",&altura);

    IMC=(altura*altura)/peso;

    printf(" Seu MMC \x82: %f",IMC);

    return 0;
}