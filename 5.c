#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    char nome_aluno [100];


    printf("\nQual o nome do aluno? ");
    scanf("%s", nome_aluno);


    printf("\nQual a nota da sua prova? ");
    scanf("%f" , &nota1);

    printf("\nQual a nota da sua segunda prova? ");
    scanf("%f" , &nota2);

    printf("\nQual a nota da sua terceira prova? ");
    scanf("%f" , &nota3);


    printf("%s", nome_aluno);
    printf("\nA media das notas e: %.2f", ( nota1 +  nota2 + nota3)/3);

    return 0;


}