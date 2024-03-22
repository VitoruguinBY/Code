#include <stdio.h>

int main(){
    float impostos, impostos_fabrica, distribuidor, custo_consumidor;


    printf("Valor do imposto de fabrica ");
    scanf("%f" , &impostos_fabrica);

    impostos = 45* impostos_fabrica/100;
    distribuidor = 28* impostos_fabrica/100;
    custo_consumidor = impostos_fabrica + distribuidor + impostos;


    printf("o valor final é: %.2f" , custo_consumidor);

    return 0;





}