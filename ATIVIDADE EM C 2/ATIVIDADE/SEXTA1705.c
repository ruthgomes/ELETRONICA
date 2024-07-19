#include<stdio.h>

int main(){

    float num1;
    float num2;

    printf("Digite o primeiro numero real: ");
    scanf("%f",&num1);

    printf("Digite o segundo numero real: ");
    scanf("%f",&num2);

    printf("a media entre %f e %f equivale a %f\n",num1,num2,(num1+num2)/2);
    printf("o resultado de %f x %f = %f\n",num1,num2,num1*num2);
    printf("o resultado de%f / %f = %f\n",num1,num2,num1/num2);
    printf("o resultado de %f + %f = %f\n",num1,num2,num1+num2);
    printf("o resultado de %f - %f = %f\n",num1,num2,num1-num2);
    return 0;
}