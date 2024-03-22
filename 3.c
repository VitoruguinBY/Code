#include <stdio.h>

int main (){

    float distancia, consumo;

    printf("Qual a distancia percorrida? ");
    scanf("%f" , &distancia);

    printf("Quanto combustivel foi consumido? ");
    scanf("%f" , &consumo);

    printf("O consumo medio foi %f" , distancia / consumo);

    return 0;








}