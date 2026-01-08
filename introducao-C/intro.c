//Exemplo: Programa maior numero 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2;
    printf("Digite dois numeros:");
    scanf("%f %f", &num1, &num2);

    if(num1>num2)
        printf("\nMaior numero: %.2f", num1);
    else
        if(num2>num1)
            printf("\nMaior numero: %.2f", num2);
        else
            printf("\nOs numeros sao iguais: %.2f", num1);

    system("pause");
}