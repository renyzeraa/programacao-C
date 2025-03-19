#include <stdio.h>

int main()
{
  // Declaração das variáveis
  float temperatura, umidade;
  unsigned int estoque, estoque_min = 1000;

  // Entrada dos dados
  printf("Entre com a temperatura (em °C): ");
  scanf("%f", &temperatura);

  printf("Entre com a umidade (em %%): ");
  scanf("%f", &umidade);

  printf("Entre com o estoque: ");
  scanf("%u", &estoque);

  // Verificação das condições de segurança
  if (temperatura < -11 || temperatura > 30)
  {
    printf("Aviso: Temperatura fora dos limites de segurança!\n");
  }
  else
  {
    printf("Temperatura dentro dos limites de segurança.\n");
  }

  if (umidade > 50)
  {
    printf("Aviso: Umidade fora dos limites de segurança!\n");
  }
  else
  {
    printf("Umidade dentro dos limites de segurança.\n");
  }

  if (estoque < estoque_min)
  {
    printf("Aviso: Nível de estoque fora dos limites de segurança!\n");
  }
  else
  {
    printf("Nível de estoque dentro dos limites.");
  }

  return 0;
}
