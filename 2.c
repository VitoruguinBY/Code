#include <stdio.h>

int main () {
    int num1;
    int num2;
    int soma;
    int subtracao;
    int multiplicacao;
    int divisao;
    

    printf("Infome um numero: ");
    scanf("%d" , &num1);

    printf("Informe outro numero: ");
    scanf("%d" , &num2);
    
    soma = num1 + num2; 

    printf("\n A soma dos seus numeros e de: %d" , soma);

    subtracao = num1 - num2;

    printf("\n A subtracao dos seus numeros e de: %d" , subtracao);

    multiplicacao = num1 * num2;
    
    printf("\n A multiplicacao dos seus numeros e de: %d" , multiplicacao);
    
    divisao = num1 / num2;

    printf("\n A divisao dos seus numeros e de: %d" , divisao);

    return 0;



}