#include <stdio.h>

int main () {

    float salario, vendas;
    char nome [100];

    printf("\n Insira seu nome ");
    scanf("%s" , nome);
 
    printf("\n Insira seu salario base ");
    scanf("%f" , &salario);

    printf("\n Insira o total de vendas nesse mes ");
    scanf("%f" , &vendas);

    printf("%s", nome);
    printf("Seu salario serag de: %.2f", (salario + vendas)*0.15);

    return 0;


    

    



}