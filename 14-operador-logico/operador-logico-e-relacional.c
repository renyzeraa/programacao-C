#include <stdio.h>

int main()
{
  int idade = 20;
  float altura = 1.75;

  if (idade >= 18 && idade <= 30 && altura > 1.70)
  {
    printf("Você está na faixa etária e tem a altura adequada\n");
  }
  else
  {
    printf("Você não atende aos critérios\n");
  }

  float temperatura = 25.0;
  float umidade = 55.0;

  if (temperatura >= 20.0 && temperatura <= 30.0 && umidade > 50.0)
  {
    printf("As condições estão favoráveis\n");
  }
  else
  {
    printf("As condições não estão favoráveis\n");
  }

  /*
    A expressão temperatura >= 20.0 && temperatura <= 30.0 && umidade > 50.0 contém três condições:
      temperatura >= 20.0: verifica se a temperatura é maior ou igual a 20.0 graus.
      temperatura <= 30.0: verifica se a temperatura é menor ou igual a 30.0 graus.
      umidade > 50.0: verifica se a umidade é maior que 50.0%.


    O operador && é usado para combinar as três condições. A expressão completa será verdadeira apenas se as três condições forem verdadeiras.
    Se a expressão for verdadeira, o programa imprime "As condições estão favoráveis". Caso contrário, imprime "As condições não estão favoráveis".


    Com os valores apresentados, a saída do programa será "As condições estão favoráveis".
  */
  return 0;
}