#include <stdio.h>

int main()
{
  int numero = 10;

  if (numero % 2 == 0)
  {
    printf("O número é par\n\n");
  }
  else
  {
    printf("O número é ímpar\n\n");
  }

  float temperatura = 25.0;

  if (temperatura > 30.0)
  {
    printf("Está calor\n\n");
  }
  else
  {
    printf("Não está calor\n\n");
  }

  int nota = 65;

  if (nota >= 60)
  {
    printf("Você passou!\n\n");
  }
  else
  {
    printf("Você não passou.\n\n");
  }

  return 0;
}