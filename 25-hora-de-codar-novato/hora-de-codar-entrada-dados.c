#include <stdio.h>

int main()
{
  int numero;

  do
  {
    printf("Digite um número par para sair do programa: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
      printf("Número válido! Saindo do programa...\n");
    }
    else
    {
      printf("Número impar. Digite um número par.\n");
    }
  } while (numero % 2 != 0);

  return 0;
}