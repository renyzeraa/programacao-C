#include <stdio.h>

int main()
{
  int idade, matricula;
  char nome[50];
  float altura;

  printf("Digite sua idade: \n");
  scanf("%d", &idade);

  printf("Digite seu nome: \n");
  scanf("%s", nome);

  printf("Digite seu matrícula: \n");
  scanf("%d", &matricula);

  printf("Digite sua altura: \n");
  scanf("%f", &altura);

  printf("Nome do aluno: %s - Matrícula: %d\n", nome, matricula);
  printf("Idade: %d - Altura: %.2f\n", idade, altura);

  return 0;
}