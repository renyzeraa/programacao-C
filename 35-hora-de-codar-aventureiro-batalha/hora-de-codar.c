#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main()
{
  int matriz[LINHAS][COLUNAS];
  int soma = 0;

  // Calculando a soma dos elementos do vetor
  for (int i = 0; i < LINHAS; i++)
  {
    for (int j = 0; j < COLUNAS; j++)
    {
      soma++;
      matriz[i][j] = soma;
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("A soma dos elementos do vetor é: %d\n", soma);

  return 0;
}