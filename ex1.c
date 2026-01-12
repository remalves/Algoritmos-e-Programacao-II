/* Elabore um programa que efetue a soma de todos os números ímpares que são
múltiplos de 3 e que se encontram no intervalo de 1 a 500.  */

#include <stdio.h>

int main()
{
    int soma = 0, i;

    for(i=1;i<=500;i++)
    {
        if(i % 2 != 0 && i % 3 == 0)
        {
            soma += i;
        }
    
    }
    printf("Soma = %d", soma);
    return 0;
}