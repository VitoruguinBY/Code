#include <stdio.h>

int main(){

    int numero;

    printf("Informe um numero ");
    scanf("%d" , &numero);

    if (numero >= 100 && numero <= 200)
    {
        printf("Seu numero esta entre 100 e 200 ");
    }

    else
    {
        printf("Seu numero não esta entre 100 e 200 ");

    }

return 0;

}