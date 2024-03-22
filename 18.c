#include <stdio.h>

int main(){
    int idade, contador, maioridade, menoridade;

    maioridade = 0;
    menoridade= 0;

    for ( int i = 1; i < 5; i++)
    {
        printf("Informe a idade da pessoa ", "" , contador , ": ");
        scanf("%d" , &idade);



        if (idade >=18)
        
        {
          printf("Maior idade \n");
          maioridade++;

            }

            else{
                printf("Menor de idade \n");
                menoridade++;
            }

        }

        return 0;
        
    }
    
