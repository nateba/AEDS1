#include <stdio.h>
#include <math.h>
/* Autor - Nathan
    Objetivo - Ler os valores dos catetos de um triângulo retângulo e mostrar a hipotenusa.
    Data - 04/09/2022 */

int main(void) {
  
  //Declaração de variáveis
  
  float cat1, cat2, hipotenusa;
  printf("Qual o valor dos catetos do triângulo retângulo?");
  scanf("%f %f",&cat1, &cat2);

  //Declaração de variáveis
  
  hipotenusa= sqrt((pow(cat1,2)+pow(cat2,2)));
  
  //Resultado do Programa

  printf("A hipotenusa do triângulo proposto é: %.2f",hipotenusa);
  
  
  return 0;
}