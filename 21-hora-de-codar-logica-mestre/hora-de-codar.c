#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int jogador, computador, escolha;

  srand(time(0));                // Inicializa a semente do gerador de números aleatórios
  computador = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100

  printf("Digite um número entre 1 e 100: ");
  scanf("%d", &jogador);

  printf("Escolha o tipo de comparação:\n");
  printf("1 - Maior que o número do computador\n");
  printf("2 - Menor que o número do computador\n");
  printf("3 - Igual ao número do computador\n");
  scanf("%d", &escolha);

  switch (escolha)
  {
  case 1:
    (jogador > computador) ? printf("Você venceu! Seu número é maior.\n") : printf("Você perdeu! O número do computador era %d.\n", computador);
    break;
  case 2:
    (jogador < computador) ? printf("Você venceu! Seu número é menor.\n") : printf("Você perdeu! O número do computador era %d.\n", computador);
    break;
  case 3:
    (jogador == computador) ? printf("Parabéns! Você acertou o número!\n") : printf("Que pena! O número do computador era %d.\n", computador);
    break;
  default:
    printf("Escolha inválida!\n");
  }

  return 0;
}
