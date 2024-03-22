#include <stdio.h>

int main(){

    char nome;
    char sexo;
    int contador, totalhomens, totalmulheres;

    totalhomens = 0;
    totalmulheres = 0;

    for (contador i = 1; i < 56; i++)
    {
       printf("Informe o nome da pessoa " + contador, ":");
       scanf("%s" , nome);

       printf("Infome o sexo da pessoa (M para masxulino e F para Feminino)");
       scanf("%s" , sexo);


       if (sexo == "M" && sexo == "n")
       {
        printf(nome + "," , "é homem");
        totalhomens++;
       }
    
        else if (sexo ==  "F" && sexo == "f")
        {
            printf(nome + "," , "é mulher");
            totalmulheres++;
        }
        
    }
        return 0;
}