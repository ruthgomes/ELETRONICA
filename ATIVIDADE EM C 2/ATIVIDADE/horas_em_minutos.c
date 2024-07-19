#include<stdio.h>
//horas em minutos
int main(){
    float horas;
    float minutos;

    printf("Informe as horas: \n");
    scanf("%f",&horas);

    minutos= horas*60;

    printf("%2.f sao %2.f minutos",horas,minutos);

    return 0;
}