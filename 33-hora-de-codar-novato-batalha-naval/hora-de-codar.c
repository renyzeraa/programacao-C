#include <stdio.h>

int main()
{
  int index;
  char *nomesAlunos[3][3] = {
      {"Aluno 1", "Pt: 30", "Mat: 90"},
      {"Aluno 2", "Pt: 60", "Mat: 60"},
      {"Aluno 3", "Pt: 90", "Mat: 30"}};

  printf("Digite um número do aluno que queira ver as notas... \n");
  printf("Aluno 1, digite 1; \n");
  printf("Aluno 2, digite 2; \n");
  printf("Aluno 3, digite 3; \n");

  scanf("%d", index);

  printf("Você escolheu o aluno %s \n", nomesAlunos[index][0]);
  printf("Nota em portugues %s \n", nomesAlunos[index][1]);
  printf("Nota em Matemática %s \n", nomesAlunos[index][2]);

  return 0;
}