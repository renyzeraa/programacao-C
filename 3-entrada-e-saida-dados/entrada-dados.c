#include <stdio.h>

int main()
{
  int idade;
  float altura;
  // double saldoBancario;
  // char inicial;
  char nome[20];

  printf("digite a idade: ");
  scanf("%d", &idade);
  printf("A idade é: %d\n", idade);

  printf("digite a altura: ");
  scanf("%f", &altura);
  printf("A altura é: %.2f\n", altura);

  printf("digite o nome: ");
  scanf("%s", nome);
  printf("O nome é: %s\n", nome);

  return 0;
}