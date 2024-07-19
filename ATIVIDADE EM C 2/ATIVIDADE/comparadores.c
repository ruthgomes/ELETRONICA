#include<stdio.h>

int main(){

    int num1;
    int num2;

    printf("Digite o primeiro numero real: ");
    scanf("%d",&num1);

    printf("Digite o segundo numero real: ");
    scanf("%d",&num2);

    printf("o resultado de %d == %d vale %d\n",num1,num2,num1==num2);
    printf("o resultado de %d > %d vale %d\n",num1,num2,num1>num2);
    printf("o resultado de %d >= %d vale %d\n",num1,num2,num1>=num2);
    printf("o resultado de %d < %d vale %d\n",num1,num2,num1<num2);
    printf("o resultado de %d <= %d vale %d\n",num1,num2,num1-num2);
    printf("o resultado de %d != %d vale %d\n",num1,num2,num1!=num2);
    return 0;
}