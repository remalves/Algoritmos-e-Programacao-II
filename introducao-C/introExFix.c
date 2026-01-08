#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <math.h>

int main()
{   
    // Configura a codificação do terminal para UTF-8 (65001)
    SetConsoleOutputCP(CP_UTF8); 
    setlocale(LC_ALL, ""); 

    /*     int num1, num2, num3;
        char a,b, j, um;

        num1 = 1;
        num2 = 2;
        num3 = 3;
        um = '1';

        printf("\nEx1: Verdadeiro ou Falso:");
        if(num1>num2)
            printf("\nVerdadeiro!");
        else
            printf("\nFalso!");

        if('a'>'a')
            printf("\nVerdadeiro!");
        else
            printf("\nFalso!");

        if('a'<'b')
            printf("\nVerdadeiro!");
        else
            printf("\nFalso!");

        if(num3 == num2)
            printf("\nVerdadeiro!");
        else
            printf("\nFalso!");

        if(num3>=num2)
            printf("\nVerdadeiro!");
        else
            printf("\nFalso!");

        if('j'!= 'j')
            printf("\nVerdadeiro!");
        else
            printf("\nFalso!");

        if(um == um)
            printf("\nVerdadeiro!");
        else
            printf("\nFalso!");

        printf("\nComo será interpretada a expressão x+++y?");
        int x = 5, y = 10, aux;
        aux = x+++y;
        printf("\nValor do auxiliar =  %d", aux); */

    /*     printf("\n 4- Qual é o valor de k?");
        int j,k;
        printf("\nValor de K =  %d", k = j == 3);

    Explicação: 
        Precedência: O == é avaliado antes do =.
        Lixo de Memória: Como j não tem valor definido, a comparação j == 3 é falsa.
        Resultado: Em C, falso vale 0. Logo, k recebe 0. */


    /* 5- Dados três valores X, Y e Z, verifique se eles podem
    ser os comprimentos dos lados de um triângulo. Se
    forem, verifique se é um triângulo equilátero,
    isósceles ou
    escaleno. Se não formarem um
    triângulo, escreva uma mensagem informando que
    não é triângulo. 
    Considere que:
    ? O comprimento de cada lado do triângulo é menor do que
    a soma dos outros dois lados.
    ? O triângulo equilátero tem três lados iguais.
    ? O triângulo isósceles tem o comprimento de dois lados
    iguais.
    ? O triângulo escaleno tem os três lados diferentes. */

/*     int x,y,z;

    printf("\nValor de X: ");
    scanf("%d", &x);
    printf("\nValor de Y: ");
    scanf("%d", &y);
    printf("\nValor de Z: ");
    scanf("%d", &z);

    if(x+y>z && y+z>x && z+x>y)
    {
        if(x == y && y == z)
        {
            printf("\nEquilatero");
        } 
        else if(x == y || y == z || z == x)
        {
            printf("\nIsosceles");
        }
        else
        {
            printf("\nEscaleno");
        }
    }
    else
    {
        printf("\nNão é um triângulo");    
    }
   return 0;
}
 */

/* 6- Faça um programa para resolver equações
do 2o grau. Considere:
ax2 + bx + c = 0 
Obs: a deve ser diferente de 0
delta = b2 - 4 * a * c
Se delta < 0, não existe raiz real
Se delta = 0, existe uma raiz real
x = (-b) / (2 * a)
Se delta > 0, existem duas raízes reais
x1 = (- b + raiz quadrada de delta) / (2 * a)
x2 = (- b - raiz quadrada de delta) / (2 * a) */

/* 
    float a,b,c,delta,x=0,x1=0,x2=0;
    printf("\nValor de a: ");
    scanf("%f", &a);
    printf("\nValor de b: ");
    scanf("%f", &b);
    printf("\nValor de c: ");
    scanf("%f", &c);

    delta = pow(b,2) - (4*a*c);
    if(delta == 0)
    {
        x = (-b) / (2*a);
        printf("\nValor de x =  %.2f", x);
    }
    else if(delta>0)
    {
        x1 = (- b + sqrt(delta)) / (2 * a);
        x2 = (- b - sqrt(delta)) / (2 * a); 
        printf("\nValor de x1 =  %.2f \nValor de x2 = %.2f", x1,x2);
    }
    else
    {
        printf("\nSem raíz real");
    }
    return 0; */


/* 7- Faça um programa que receba dois números e
execute uma das operações listadas a seguir, de
acordo com a escolha do usuário. Se for digitada
uma opção inválida, mostre a mensagem de erro e
finalize o programa. As opções são:
1. Primeiro número elevado ao segundo número;
2. Raiz quadrada de cada número;
3. Raiz cúbica de cada número;
4. Produto dos números;
OBS: Usar comando de seleção múltipla (case)
 */

    float n1,n2, res, x1,x2;
    int opc;
    printf("\nValor de n1: ");
    scanf("%f", &n1);
    printf("\nValor de n2: ");
    scanf("%f", &n2);

    printf("\n\nEscolha uma das opções listadas:\n\n1. Primeiro número elevado ao segundo número;\n2. Raiz quadrada de cada número;\n3. Raiz cúbica de cada número;\n4. Produto dos números.\n\n");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        res = pow(n1,n2);
        printf("\nResultado = %.2f", res);
        break;
    case 2: 
        x1 = sqrt(n1);
        x2 = sqrt(n2);
        printf("\nValor da raíz de %.f =  %.2f \nValor da raíz de %.f = %.2f",n1,x1,n2,x2);
        break;
    case 3:
        x1 = cbrt(n1);
        x2 = cbrt(n2);
        printf("\nValor da raíz cúbica de %.f =  %.2f \nValor da raíz de %.f = %.2f",n1,x1,n2,x2);
        break;
    case 4: 
        res = n1 * n2;
        printf("\nProduto dos numeros %.f e %.f = %.f",n1,n2,res);
        break; 
    default: printf("\nOpção inválida!\nEncerrando programa ... "); 
        break;
    }

}