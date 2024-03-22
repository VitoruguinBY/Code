#include <stdio.h>

int main(){
    float cotacao, dolar;

    printf("Escreva o valor ");
    scanf("%f" , &dolar);

    printf("Qual o valor da cotacao ");
    scanf("%f" , &cotacao);

    printf("O valor do dolar em real é: %f" , dolar * cotacao );

    return 0;


}