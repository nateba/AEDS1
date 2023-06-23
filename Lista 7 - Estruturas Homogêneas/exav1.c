#include <stdio.h>
/*Nome:Nathan de Araújo Cunha Lisboa
Objetivo:Faça um procedimento que receba e preencha um vetor com as notas de uma
turma de 10 alunos. Faça um outro procedimento que receba um vetor preenchido
com as notas, calcule a média da turma e conte quantos alunos obtiveram nota
acima da média. Esse procedimento deve exibir a média e o resultado da contagem.
Faça um programa que declare as devidas variáveis e acione os procedimentos.
Data:14/11/2022*/
void Notas(float notas[10]) {
  for (int alunos = 0; alunos < 10; alunos++) {

    printf("Qual a nota do aluno %d?\t", alunos + 1);
    scanf(" %f", &notas[alunos]);
  }
}
void Media(float notas[10]) {
  float soma = 0, media = 0;
  int cont = 0;

  for (int quest = 0; quest < 10; quest++) {
    soma += notas[quest];
  }
  media = soma / 10;
  for (int quest = 0; quest < 10; quest++) {
    if (notas[quest] > media)
      cont++;
  }

  printf("\nA média dos estudantes é %.2f\n", media);
  printf("Estudantes acima da média %d\n", cont);
}
int main(void) {
  float notas[10];
  Notas(notas);
  Media(notas);

  return 0;
}