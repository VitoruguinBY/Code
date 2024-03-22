#include <stdio.h>


int main(){

    float nota1, nota2, nota3, media;
    char nome [100];

    printf("Infomre seu nome ");
    scanf("%s" , nome);

    printf("Digite sua primeira nota ");
    scanf("%f" , &nota1 );
    

    printf("Digite sua segunda nota ");
    scanf("%f" , &nota2 );


    printf("Digite sua terceira nota ");
    scanf("%f" , &nota3 );


    media = (nota1 + nota2 + nota3)/3;



    if (media >=7) {
        printf("%s" , nome);
        printf(" Voce foi aprovado");
    }



    if (media <= 5){
        printf("Voce foi reprovado %s" , nome);
    }



    if (media >= 5.1 && media <=6.9){
        printf("%s Voce foi aprovado " , nome);

    }

    return 0;
    

}