#include <stdio.h>

int main(){

    int numeros;
    int contador;

    for ( int i = 0; i < 80; i++)
    {
        printf("Digite o %d numero" , 1 + 1);
        scanf("%d" , &numeros);



        if (numeros >= 10 && numeros <= 150);
        {
            contador++;
        }
        
    }

    printf("Existem %d numero(s) no intervalo de 10 e 100, \n" , contador);

    return 0;

}