#include <stdio.h>

int main ( ) {
    int num1;
    int num2;
    int soma;

    printf ("Informe um numero \n");
    scanf("%d" , &num1);

    printf ("Informe outro numero \n");
    scanf("%d" , &num2);

    soma = num1 + num2;

    printf("A soma dos numeros e: %d", soma);

    return 0;
}