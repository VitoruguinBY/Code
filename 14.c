#include <stdio.h>

int main(){
    int num1, num2;

    printf("Informe um numero ");
    scanf("%d" , &num1);

    printf("Informe outro numero ");
    scanf("%d" , &num2);

    if (num1 > num2)
    {
       printf ("%d e maior que %d: " , num1 , num2);
    }

    else
    
    {
        printf ("%d e maior que %d: " , num2 , num1);


    }

    return 0;
}