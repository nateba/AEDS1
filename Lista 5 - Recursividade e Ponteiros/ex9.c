#include <stdio.h>
/*Autor Nathan Lisboa
Faça uma função que lê um número indeterminado de notas de alunos, calcula e retorna a 
média das notas dos alunos aprovados (nota maior ou igual a 6). Faça um programa que lê 
o número de alunos e imprime a média retornada pela função. 
Data:26/09/2022*/
// Criar a função
float Aprovado(int N) {
  // Declarar as variáveis
  int tt_aprovado = 0;
  float nota, tt_notam6 = 0, med_aprovado;

  // Criar a repetição baseada na entrada N
  for (int i = 1; i <= N; i++) {
    printf("\nALUNO %d\n", i);
    printf("Digite a nota: ");
    scanf("%f", &nota);

    // Criar condicional para avaliar aprovados
    if (nota >= 6) {
      tt_aprovado++;
      tt_notam6 += nota;
    }
  }

  // Calcular a média dos aprovados
  if (tt_aprovado > 0) { // Caso denominador seja zero
    med_aprovado = tt_notam6 / tt_aprovado;

    return med_aprovado; // Retornar média em caso de divisão possível
  } else {
    return tt_aprovado;
  }
}

int main(void) {
  // Declarar as variáveis
  int alunos;

  // Ler a variável
  printf("Digite o número total de alunos: ");
  scanf("%d", &alunos);

  // Exibir o resultado
  printf("\nA média dos alunos aprovados é %.2f.\n", Aprovado(alunos));

  return 0;
}