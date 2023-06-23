#include <stdio.h>
/*Autor Nathan Lisboa
Faça  um  procedimento  que  recebe  a  média  final  de  um  aluno,  identifica
e  exibe  o  seu conceito,  conforme  a  tabela  abaixo.  Faça  um  programa que
leia  a  média  de  N  alunos, acionando o procedimento para cada um deles. (N
deve ser lido do teclado) Data:26/09/2022*/
// Criar o procedimento
void Conceito(int media) {
  if (media <= 39)
    printf("\nConceito: F\n");
  else if (media <= 59)
    printf("\nConceito: E\n");
  else if (media <= 69)
    printf("\nConceito: D\n");
  else if (media <= 79)
    printf("\nConceito: C\n");
  else if (media <= 89)
    printf("\nConceito: B\n");
  else
    printf("\nConceito: A\n");
}

int main(void) {
  // Declarar as variáveis
  int N, med;

  // Ler as variáveis
  printf("Quantos alunos você quer analisar? ");
  scanf("%d", &N);

  // Criar a repetição para N vezes
  for (int i = 1; i <= N; i++) {
    // Ler a variável média final
    printf("\nALUNO %d\n", i);
    printf("Média final: ");
    scanf("%d", &med);

    // Chamar o procedimento
    Conceito(med);
  }
  return 0;
}