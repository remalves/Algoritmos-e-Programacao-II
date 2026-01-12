/* Faça um programa que mostre os 8 primeiros termos
da sequência de Fibonacci.
Ex: 0, 1, 1, 2, 3, 5, 8,13, 21,34, 55... */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, termo1 = 0, termo2 = 1,termo3 = 0;

/*  printf("%d - ", termo1);
    printf("%d - ", termo2);
    for(i=2; i<8; i++)
    {
        termo3 = termo1 + termo2;
        printf("%d - ", termo3);
        termo1 = termo2;
        termo2 = termo3;
    }
 */

    for(i=0; i<8;i++)
    {
        printf("%d |", termo3);
        termo3 = termo1 + termo2;
        termo1 = termo2;
        termo2 = termo3;
    }

}
