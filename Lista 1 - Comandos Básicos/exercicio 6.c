#include <stdio.h>
#include <math.h>
/* Autor - Nathan
    Objetivo - Ler a razão e o primeiro termo de uma PA e mostrar o seu decimo termo. 
    Data - 04/09/2022 */

int main(void) {
  
  //Declaração de variáveis

  float razao, term1, term10;

  //Ler a razao e o primeiro termo

  printf("Qual a razao da PA e o primeiro termo?");
  scanf("%f %f",&razao,&term1);

  //Declaração de variáveis

  term10= (term1)+(9*term1);

  //Resultado do programa

  printf("O décimo termo dessa PA é %.2f",term10);
  
  
  

  return 0;
}