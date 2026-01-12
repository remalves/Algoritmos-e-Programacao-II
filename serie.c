/* Faça um programa que receba um numero N
fornecido pelo usuário e mostre os N termos da série a
seguir:
S = 1/1 + 2/3 + 3/5 + 4/7 + 5/9 + ... + n/m
Por fim, imprima a soma total da série. */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num, cont = 0;
    float n = 1, m = 1, soma = 0;

    printf("Digite um numero inteiro > 0: ");
    scanf("%d", &num);
    while(num <= 0)
    {
        printf("Digite um numero inteiro > 0: ");
        scanf("%d", &num);
    }

    printf("Serie = ");
    while(cont < num)
    {
        
        if(cont < (num-1) )
        {
            printf("%.f / %.f + ", n,m);
        }
        else
        {
            printf("%.f / %.f", n,m);
        }
        soma += n/m;
        n++;
        m+=2;
        cont++;
    }
    printf("\nSoma = %.2f", soma); 

}