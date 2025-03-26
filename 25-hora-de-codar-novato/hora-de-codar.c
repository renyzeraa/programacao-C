#include <stdio.h>

int main()
{
  int i = 0;

  while (i <= 10)
  {
    // número impares
    if (i % 3 == 0)
    {
      printf("O número %d é impar \n", i);
    }
    // número pares
    else if (i % 2 == 0)
    {
      printf("O número %d é par \n", i);
    }
    i++;
  }

  return 0;
}