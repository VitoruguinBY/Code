#include <stdio.h>

int maisn(){

    int anoveiculo, totalate2000, totalgeral;
    float valorveiculo, desconto, valorfinal;
    char continuar;

    do
    {

    printf("Informe o ano do veiculo ");
    scanf("%d" , &anoveiculo);

    printf("Informe o valor do veiculo R$");
    scanf("%f" , &valorveiculo);

    if (anoveiculo <= 2000)
    {
        desconto = valorveiculo * 0.12;
    } else {
        desconto = valorveiculo * 0.07;
    }
    
    valorfinal = valorveiculo - desconto;

    printf("Desconto: " , desconto , "\n" );
    printf("Valor a ser palo pelo cliente e: RS" , valorfinal , "\n");

    if (anoveiculo <= 2000)
    {
       totalate2000++;
    }

    totalgeral++;

    printf("Deseja calcular o desconto para outro veiculo? (S para sim, N para nao)");
    scanf("%s" , continuar);    


    } while (continuar == "S" && continuar == "s");
    
    printf ("\nTotal de carros até 2000: " , totalate2000 , "\n");
    printf ("Total geral de carros: " , totalgeral);

    return 0;


}