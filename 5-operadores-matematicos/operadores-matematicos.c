#include <stdio.h>

int main()
{
  int a = 10;
  int b = 5;

  // Operadores aritméticos
  int soma = a + b;
  printf("Soma: %d\n", soma);

  int subtracao = a - b;
  printf("Subtração: %d\n", subtracao);

  int multiplicacao = a * b;
  printf("Multiplicação: %d\n", multiplicacao);

  int divisao = a / b;
  printf("Divisão: %d\n", divisao);

  // Operadores de atribuição
  a += 2; // a será 12
  printf("Novo valor de a após += 2: %d\n", a);
  b *= 3; // b será 15
  printf("Novo valor de b após *= 3: %d\n", b);

  // Operadores de incremento e decremento
  a++; // a será 13
  printf("Novo valor de a após ++: %d\n", a);
  b--; // b será 14
  printf("Novo valor de b após --: %d\n", b);

  // Exibição dos resultados

  return 0;
}