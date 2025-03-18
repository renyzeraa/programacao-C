#include <stdio.h>

int main()
{
  float nota1, nota2, nota3, media;

  // Entrada de dados
  printf("*** Programa para cálculo de média: ***\n");
  printf("Digite a nota 1: ");
  scanf("%f", &nota1);

  printf("Digite a nota 2: ");
  scanf("%f", &nota2);

  printf("Digite a nota 3: ");
  scanf("%f", &nota3);

  // Cálculo da soma e média
  media = (nota1 + nota2 + nota3) / 3;

  // Exibição do resultado
  printf("A média das notas é: %.2f\n", media);

  return 0;
}
