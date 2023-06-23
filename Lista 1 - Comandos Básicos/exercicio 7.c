#include <stdio.h>

/* Autor - Nathan
    Objetivo - Ler a razão e o primeiro termo de uma PG e mostrar o seu quinto termo. 
    Data - 04/09/2022 */

int main(void) {
  
  //Declaração de variáveis
  
  float term1, razao, term5;

  // Ler a razão e o primeiro termo

  printf("Qual a razão da PG e o seu primeiro termo?");
  scanf("%f %f",&razao,&term1);

  //Declaração de variáveis

  term5= (term1)*(pow(razao,9));

  //Resultado do programa

  printf("O quinto termo dessa PG é %.2f",term5);
  
  
  return 0;
}