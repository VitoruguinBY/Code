#include <stdio.h>

int main(){
    float valor, percentual , percentual2;

    printf("Qual o valor? ");
    scanf("%f" , &valor);

    printf("Qual o percentual? ");
    scanf("%f" , &percentual);

    percentual2 = percentual / 100;


    printf ("O valor da venda sera de: %.2f" , (valor * percentual2)+valor); 


    return 0;
}