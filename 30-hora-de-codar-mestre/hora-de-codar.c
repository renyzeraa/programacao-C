#include <stdio.h>

// Função recursiva para imprimir números de n até 1
void recursivo(int numero)
{
  if (numero > 0)
  {
    printf("%d \n", numero); // Imprime o valor atual de n
    recursivo(numero - 1);   // Chama a si mesma com n - 1
  }
}

int main()
{
  int quantidade = 5;
  printf("Contagem regressiva... \n");
  recursivo(quantidade);
  printf("Kabummmmm ! \n");
  return 0;
}