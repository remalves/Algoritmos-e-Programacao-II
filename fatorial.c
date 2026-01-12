/* Faça um programa que leia um número inteiro > 0 e
calcule o seu fatorial. */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int n, fat = 1, i;
    
    printf("Digite um numero inteiro >= 0: ");
    scanf("%d", &n);

    while(n < 0)
    {
        printf("Digite um numero inteiro > 0: ");
        scanf("%d", &n);
    }

    for(i=1; i<=n; i++)
    {
        fat *= i; 
    }

    printf("Fatorial de %d = %d",n,fat);



}