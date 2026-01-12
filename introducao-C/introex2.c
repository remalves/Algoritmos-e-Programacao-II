#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("\nDigite um numero: ");
    scanf("%d", &num);

    switch(num)
    {
        case 1: printf("\nNumero = 1");
            break;
        case 2: printf("\nNumero = 2");
            break;
        default: printf("\nNumero diferente de 1 e 2");
    }
    system("Pause"); 
}