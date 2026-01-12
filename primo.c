/* Faça um programa que receba um número inteiro
maior que 1 e verifique se o número é primo. Considere que um número primo é divisível apenas por
1 e por ele mesmo. */


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    
    setlocale(LC_ALL, "");

    int num, i, eh_primo = 1;
    printf("Digite um numero maior que 1: ");
    scanf("%d", &num);
    while(num <= 1)
    {
        printf("Digite um numero maior que 1: ");
        scanf("%d", &num);
    }
    int raiz = sqrt(num); //Todo número não primo tem um divisor ? ?n
    for(i=2; i<=raiz; i++) //Se nenhum divisor for encontrado até a raiz, ele é primo
    {
        if(num % i == 0)
        {
            eh_primo = 0;       
            break;
        }
    }

    
    if(eh_primo)
    {
        printf("é primo");
    }
    else
    {
        printf("Não é primo");
    }




}

