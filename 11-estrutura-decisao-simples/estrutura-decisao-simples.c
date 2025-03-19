#include <stdio.h>

int main()
{
  int numero1 = 8;
  int numero2 = 5;

  if (numero1 > numero2)
  {
    printf("numero1 é maior que numero2\n\n");
  }

  int idade = 20;

  if (idade >= 18)
  {
    printf("Você é maior de idade\n\n");
  }

  float temperatura = 32.0;

  if (temperatura > 30.0)
  {
    printf("Está calor\n");
  }
  return 0;
}