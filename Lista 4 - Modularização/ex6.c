#include <stdio.h>
/* Nathan Lisboa / 17/10
Explique cada uma das expressões a seguir, indicando a diferença entre elas:

 p++;       (*p)++;        *(p++);

Qual informação se refere a expressão *(p+10)?  */
int main(void) {
  printf("Pega o endereço do ponteiro e adiciona uma posição\n");
  printf("Pega o conteúdo na posição p e adiciona uma unidade\n");
  printf("Pega o conteúdo que esta na posição p + uma posição \n");
  printf("Pega o conteúdo que esta na posição p + 10 posições \n");
  return 0;
}