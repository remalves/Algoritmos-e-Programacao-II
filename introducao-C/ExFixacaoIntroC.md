1- Verdadeiro ou falso:
a) 1 > 2 
b) ‘a’ < ‘b’
c) 3 == 2 
d)‘1’ == ‘1’
e) 3 >= 2 
f)‘j’ != ‘j’


2 - Identifique se há erros no programa a seguir:
Main()
{
int a=1; b=2; c=3;
printf(“Os numeros são: %d %d %d\n, a, b, c, d);
}
R: sim,está faltando declarar a variavel d antes de imprimir

3- Como será interpretada a expressão
x+++y?
a) x++ + y - opção correta pois o compilador interpreta da esqueda para a direita agrupando o maior numero de caracteres para formar um operador válido
então primeiro ele incrementa o X para depois somar com o Y 

b) x + ++y => não acontece devido à regra de precedência e agrupamento da linguagem C, que favorece o agrupamento do operador de pós-incremento x++ primeiro. 

4- Qual é o valor de k?
j = 3;
K = j == 3;
R: k é igual a 3

5- Dados três valores X, Y e Z, verifique se eles podem
ser os comprimentos dos lados de um triângulo. Se
forem, verifique se é um triângulo equilátero,
isósceles ou escaleno. Se não formarem um
triângulo, escreva uma mensagem informando que
não é triângulo. Considere que:
– O comprimento de cada lado do triângulo é menor do que
a soma dos outros dois lados.
– O triângulo equilátero tem três lados iguais.
– O triângulo isósceles tem o comprimento de dois lados
iguais.
– O triângulo escaleno tem os três lados diferentes.


6- Faça um programa para resolver equações
do 2o grau. Considere:
ax2 + bx + c = 0 Obs: a deve ser diferente de 0
delta = b2 - 4 * a * c
Se delta < 0, não existe raiz real
Se delta = 0, existe uma raiz real
x = (-b) / (2 * a)
Se delta > 0, existem duas raízes reais
x1 = (- b + raiz quadrada de delta) / (2 * a)
x2 = (- b - raiz quadrada de delta) / (2 * a)


7- Faça um programa que receba dois números e
execute uma das operações listadas a seguir, de
acordo com a escolha do usuário. Se for digitada
uma opção inválida, mostre a mensagem de erro e
finalize o programa. As opções são:
1. Primeiro número elevado ao segundo número;
2. Raiz quadrada de cada número;
3. Raiz cúbica de cada número;
4. Produto dos números;
OBS: Usar comando de seleção múltipla (case)