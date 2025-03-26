#include <stdio.h>

int main()
{
  int numero, i;

  printf("Tabuada\n");
  printf("Digite um número para calcularmos a tabuada...\n");
  scanf("%d", &numero);
  for (i = 1; i <= 10; i++)
  {
    printf("%d x %d = %d\n", i, numero, i * numero);
  }

  return 0;
}